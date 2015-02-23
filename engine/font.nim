import sdl2, sdl2.ttf

type FontObj* = ref object of RootObj
    font*: ttf.FontPtr
    texture*: TexturePtr
    width*: cint
    height*: cint
    text*: cstring
    pos*: Rect

method size*(self: FontObj) =
    ttf.sizeText(self.font, self.text, addr(self.width), addr(self.height))

method create*(self: FontObj, render: RendererPtr, file: cstring, text: cstring, f_size: int, color: sdl2.Color) =
    
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

method draw*(self: FontOBj; render: RendererPtr) =
    discard

method clean*(self: FontObj) =
    ttf.close(self.font)