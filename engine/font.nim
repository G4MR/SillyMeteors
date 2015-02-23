import sdl2, sdl2.ttf

type FontObj* = ref object of RootObj
    font*: ttf.FontPtr
    texture*: TexturePtr
    width*: cint
    height*: cint
    text*: cstring
    pos*: Rect

#NOTE: sizeText needs to be discarded, might want to do a pull request
method size*(self: FontObj) =
    discard ttf.sizeText(self.font, self.text, addr(self.width), addr(self.height))

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
    var src_pos : sdl2.Rect = (cint(0), cint(0), cint(self.width), cint(self.height))
    var draw_pos : sdl2.Rect = (cint(x_pos), cint(y_pos), cint(self.width), cint(self.height))

    #draw font texture to screen
    sdl2.copy(render, self.texture, addr(src_pos), addr(draw_pos))

method clean*(self: FontObj) =
    ttf.close(self.font)