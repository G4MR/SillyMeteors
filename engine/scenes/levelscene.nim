import scene
import sdl2, sdl2.image, sdl2.ttf

type LevelScene* = ref object of Scene
    drect*: Rect
    srect*: Rect
    myimage*: TexturePtr
    level_font: FontPtr
    level_text_font: FontPtr

#my scene methods
method load*(self: LevelScene; render: RendererPtr) =
    self.level_font = ttf.openFont("assets/fonts/minecraftia.ttf", 60)
    self.level_text_font = ttf.openFont("assets/fonts/minecraftia.ttf", 40)
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

# draw to the renderer
method clean*(self: LevelScene) =
    ttf.close(self.level_font)
    ttf.close(self.level_text_font)
    discard 