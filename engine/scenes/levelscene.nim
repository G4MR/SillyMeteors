import scene
import sdl2, sdl2.image, sdl2.ttf
import math
import strutils

import "../font"
import "../sprite"
import "../helpers"
import "../smcontainer"

type LevelScene* = ref object of Scene
    smc*: SMContainer
    level*: int
    drect*: Rect
    srect*: Rect
    image*: Sprite
    changed*: bool
    myimage*: TexturePtr
    level_font*: FontObj
    level_text_font*: FontObj
    count*: float

#set level
method setLevel*(self: LevelScene, level: int) = 
    self.level = level

#get level
method getLevel*(self: LevelScene): int = 
    result = self.level

#my scene methods
method load*(self: LevelScene; render: RendererPtr, smc: SMContainer) =
    
    #set scene manager to access scene changer
    self.smc = smc

    #set start level
    self.setLevel(1)

    #setup fonts
    self.level_font = FontObj()
    self.level_font.create(render, "Level Scene", "assets/fonts/minecraftia.ttf", 60, helpers.toColor(0,0,0,0))
    
    self.level_text_font = FontObj()
    self.level_text_font.create(render, "Level", "assets/fonts/minecraftia.ttf", 60, helpers.toColor(0,0,0,0))
    
    self.myimage = image.loadTexture(render, "assets/mb1.png")
    self.drect = helpers.toRect(300, 600, 101, 84)
    self.srect = helpers.toRect(0, 0, 101, 84)

    self.image = Sprite()
    self.image.create("assets/mb1.png", render, (0,0,101,84), (440,300))

# each scene will have its own events that they can run 
# so say we wanted to map keys different for each scene
# then we could
method events*(self: LevelScene; e: Event) =
    if e.kind == MouseButtonDown:
        self.changed = true
        self.smc.select("MyScene")
    discard 

# this method allows us to update the position on the screen
# before something gets drawn
method update*(self: LevelScene; dt: float) =

    if self.changed == true:
        self.changed = false
        self.setLevel(self.getLevel() + 1)

    self.count += dt

    var text = "Current Level" & " " & intToStr(self.getLevel())
    self.level_font.setText(text)

    let x_origin = 640.0
    let y_origin = 360.0

    var x = self.image.fdst.x
    var y = self.image.fdst.y

    let angle = (45 * dt) * math.PI/180

    let rotate_x = math.cos(angle) * (x - x_origin) - math.sin(angle) * (y - y_origin) + x_origin;
    let rotate_y = math.sin(angle) * (x - x_origin) + math.cos(angle) * (y - y_origin) + y_origin;

    self.image.setfDestination(rotate_x, rotate_y)
    self.image.setDestination(rotate_x, rotate_y)

    #echo (dt, ",", x, ",", y)

    #echo self.count

    discard

# draw to the renderer
method draw*(self: LevelScene, render: RendererPtr) =
    
    self.image.draw(render)
    self.level_font.draw(render, 200, 300)
    sdl2.copy(render, self.myimage, addr(self.srect), addr(self.drect))

# draw to the renderer
method clean*(self: LevelScene) =
    self.level_font.clean()
    self.level_text_font.clean()
    discard 