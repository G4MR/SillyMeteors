import sdl2, sdl2.ttf
import helpers

type FontObj* = ref object of RootObj
    font*: ttf.FontPtr
    texture*: TexturePtr
    width*: int
    height*: int
    text*: cstring
    pos*: Rect

#NOTE: sizeText needs to be discarded, might want to do a pull request
method size*(self: FontObj) =
    var width: cint
    var height: cint
    discard ttf.sizeText(self.font, self.text, addr(width), addr(height))

    self.width = width
    self.height = height

method create*(self: FontObj, render: RendererPtr, 
    text: cstring, file: cstring, f_size: int, color: sdl2.Color) =
    
    #store text
    self.text = text

    #open file
    self.font = ttf.openFont(file, cint(f_size))
    
    #create surface from font pointer
    var surf = ttf.renderTextBlended(self.font, text, color)
    
    #get texture from surface
    self.texture = sdl2.createTextureFromSurface(render, surf)

    #get size
    self.size()

method draw*(self: FontOBj; render: RendererPtr, x_pos: int, y_pos: int) =
    #font/draw position
    var src_pos : sdl2.Rect = helpers.toRect((0, 0, self.width, self.height))
    var draw_pos : sdl2.Rect = helpers.toRect((x_pos, y_pos, self.width, self.height))

    #draw font texture to screen
    sdl2.copy(render, self.texture, addr(src_pos), addr(draw_pos))

method clean*(self: FontObj) =
    ttf.close(self.font)