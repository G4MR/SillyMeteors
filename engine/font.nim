import sdl2, sdl2.ttf
import helpers

#TODO: Figure out how error handling works with nim and proper use in this object

type FontObj* = ref object of RootObj
    pos*: sdl2.Rect
    spos*: sdl2.Rect
    dpos*: sdl2.Rect
    font*: ttf.FontPtr
    text*: cstring
    surf*: sdl2.SurfacePtr
    color*: sdl2.Color
    width*: int
    height*: int
    loaded*: bool
    textChanged*: bool
    texture*: sdl2.TexturePtr

#NOTE: sizeText needs to be discarded, might want to do a pull request
method size*(self: FontObj) =
    var width: cint
    var height: cint
    let size = ttf.sizeText(self.font, self.text, addr(width), addr(height))

    self.width = width
    self.height = height

method setColor*(self: FontObj, color: sdl2.Color) =
    self.color = color

method setText*(self: FontObj, text: cstring) =
    self.text = text
    self.textChanged = true

method createTexture*(self: FontObj, render: RendererPtr) =
    
    #create surface from font pointer
    self.surf = ttf.renderTextBlended(self.font, self.text, self.color)
    
    #get texture from surface
    self.texture = sdl2.createTextureFromSurface(render, self.surf)

    self.size()

method create*(self: FontObj, render: RendererPtr, 
    text: cstring, file: cstring, f_size: int, color: sdl2.Color) =
    
    #store text
    self.setText(text)
    self.textChanged = false

    #set color
    self.setColor(color)

    #open file
    self.font = ttf.openFont(file, cint(f_size))

method destroy*(self: FontObj) =
    destroy self.surf
    destroy self.texture

method draw*(self: FontObj; render: RendererPtr, x_pos: int, y_pos: int) =

    #font/draw position
    var src_pos : sdl2.Rect = helpers.toRect(0, 0, self.width, self.height)
    var draw_pos : sdl2.Rect = helpers.toRect(x_pos, y_pos, self.width, self.height)

    #create texture
    self.createTexture(render)

    #draw font texture to screen
    sdl2.copy(render, self.texture, addr(src_pos), addr(draw_pos))

    #clean up
    self.destroy()

method clean*(self: FontObj) =
    self.destroy()
    ttf.close(self.font)