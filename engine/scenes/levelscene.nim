import scene, sdl2, sdl2.image

type LevelScene* = ref object of Scene
    drect*: Rect
    srect*: Rect
    myimage*: TexturePtr

#my scene methods
method load*(self: LevelScene; render: RendererPtr) =
    self.myimage = image.loadTexture(render, "assets/mb1.png")
    self.drect = (cint(0), cint(0), cint(101), cint(84))
    self.srect = (cint(0), cint(0), cint(101), cint(84))

# each scene will have its own events that they can run 
# so say we wanted to map keys different for each scene
# then we could
method events*(self: LevelScene; e: Event) =
    discard 

# this method allows us to update the position on the screen
# before something gets drawn
method update*(self: LevelScene; dt: float) =
    discard

# draw to the renderer
method draw*(self: LevelScene, render: RendererPtr) =
    discard sdl2.copy(render, self.myimage, addr(self.srect), addr(self.drect))