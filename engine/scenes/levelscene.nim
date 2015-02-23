import scene
import sdl2, sdl2.image, sdl2.ttf
import "../font"
import "../helpers"

type LevelScene* = ref object of Scene
    drect*: Rect
    srect*: Rect
    myimage*: TexturePtr
    level_font: FontObj
    level_text_font: FontObj

#my scene methods
method load*(self: LevelScene; render: RendererPtr) =
    #self.level_font = ttf.openFont("assets/fonts/minecraftia.ttf", 60)
    #self.level_text_font = ttf.openFont("assets/fonts/minecraftia.ttf", 40)
    self.myimage = image.loadTexture(render, "assets/mxb1.png")
    self.drect = helpers.toRect((300, 600, 101, 84))
    self.srect = helpers.toRect((0, 0, 101, 84))

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
    #self.level_font.clean()
    discard 