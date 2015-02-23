import sdl2, sdl2.ttf

type FontObj* = ref object of RootObj
    font*: ttf.FontPtr
    texture*: TexturePtr

method size*(self: FontObj) =

method create*(self: FontObj, render: RendererPtr, file: cstring, text: cstring, f_size: int, color: sdl2.Color) =
    self.font = ttf.openFont(file, cint(f_size))
    var surf = ttf.renderTextBlended(self.font, text, color)
    self.texture = sdl2.createTextureFromSurface(render, surf)

    #get size

method clean*(self: FontObj) =
    ttf.close(self.font)