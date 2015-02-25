import sdl2, sdl2.image
import helpers

type Sprite* = ref object of RootObj
    src*: sdl2.Rect
    dst*: sdl2.Rect
    fdst*: tuple[x, y: float]
    image*: sdl2.TexturePtr
    loaded*: bool

#check if sprite file was loaded
method isLoaded*(self: Sprite): bool =
    result = self.loaded == true

method notLoaded*(self: Sprite): bool =
    result = self.loaded == false

method setfDestination*(self: Sprite; x, y: float) =
    self.fdst.x = x
    self.fdst.y = y

#set destination dimensions (where we want to print)
method setDestination*(self: Sprite; dst: tuple[x, y, w, h: int]) =
    
    #set source position
    self.dst = helpers.toRect(dst)
    self.setfDestination(float(dst.x), float(dst.y))

#set destination dimensions (where we want to print)
method setDestination*(self: Sprite; dst: tuple[x, y: int]) =
    
    #set source position
    self.dst = helpers.toRect((dst.x, dst.y, int(self.src.w), int(self.src.h)))
    self.setfDestination(float(dst.x), float(dst.y))

#set source dimensions (used for cropping if necessary)
method setSource*(self: Sprite; src: tuple[x, y, w, h: int]) =

    #set source position
    self.src = helpers.toRect(src)
    self.setDestination((0, 0, int(self.src.w), int(self.src.h)))

method load*(self: Sprite, file: cstring, render: RendererPtr) =
    
    #try loading image
    self.image = image.loadTexture(render, file)

    #check if file loaded
    if self.image == nil:
        self.loaded = false
    else:
        self.loaded = true

method create*(self: Sprite; file: cstring, render: RendererPtr, src: tuple[x, y, w, h: int]) =
    
    #set dimensions
    self.setSource(src)

    #load image
    self.load(file, render)

method create*(self: Sprite; file: cstring, render: RendererPtr, src: tuple[x, y, w, h: int], dst: tuple[x, y: int]) =
    
    #set dimensions
    self.setSource(src)
    self.setDestination(dst)

    #load image
    self.load(file, render)

method create*(self: Sprite; file: cstring, render: RendererPtr, src: tuple[x, y, w, h: int], dst: tuple[x, y, w, h: int]) =
    
    #set dimensions
    self.setSource(src)
    self.setDestination(dst)

    #load image
    self.load(file, render)

method draw*(self: Sprite; render: RendererPtr) =
    
    #make sure we can draw
    if self.isLoaded():
        sdl2.copy(render, self.image, addr(self.src), addr(self.dst))