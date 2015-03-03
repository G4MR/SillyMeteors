import sdl2, sdl2.ttf, sdl2.gfx

import defaults
import engine.font
import engine.helpers
import engine.scenemanager
import engine.window_properties

init(INIT_EVERYTHING)

#init ttf usage
ttfInit()

# Window Properties
var win_properties = WindowProperties()
win_properties.init("SillyMeteors", 1280, 720, 1280, 720)

# game details
var gdefaults = Defaults()

gdefaults.level = 1
gdefaults.running = true

# sdl defaults
var
    event: Event = defaultEvent
    window: WindowPtr
    render: RendererPtr

# setup window & renderer 
window = createWindow(win_properties.name,
    SDL_WINDOWPOS_UNDEFINED,
    SDL_WINDOWPOS_UNDEFINED,
    win_properties.width,
    win_properties.height,
    SDL_WINDOW_SHOWN)

if isNil(window):
    quit("Couldn't create window", QuitFailure)

render = createRenderer(window, -1,
    Renderer_Accelerated or Renderer_TargetTexture)

if isNil(render):
    quit("Couldn't create renderer", QuitFailure)

# scene manager
var sManager = SceneManager()

# setup scenes
sManager.init(win_properties, gdefaults)

# let the scene manager load up variables outside of the game loop
sManager.load(render)

#test font, removed soon
var myfont : FontObj = FontObj()
var myfont_color : sdl2.Color = helpers.toColor(0, 0, 0, 0)
myfont.create(render, "Display This", "assets/fonts/minecraftia.ttf", 60, myfont_color)

#fps manager
var fps: FpsManager
fps.init()
fps.setFramerate(60)

# game loop
while gdefaults.running == true:

    # poll events 
    while pollEvent(event):
        if event.kind == QuitEvent:
            gdefaults.running = false

        #run custom events
        sManager.events(event)

    let dt = fps.getFramerate() / 1000

    #update 
    sManager.update(dt)

    # update screen
    render.clear()
    render.setDrawColor(255, 0, 0, 255)

    # draw to screen
    sManager.draw(render)
    myfont.draw(render, 200, 200)

    # display
    render.present()
    fps.delay()

#clean up scenes
sManager.clean()
myfont.clean()

# clean up window/render
destroy render 
destroy window 

#quit sdl/libraries
ttf.ttfQuit()
sdl2.quit()