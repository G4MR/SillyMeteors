import sdl2, sdl2.ttf, sdl2.gfx
import engine.scenemanager
import engine.font
import engine.helpers

init(INIT_EVERYTHING)

#init ttf usage
ttfInit()

# dimensions
var
    target_width: int = 1280 # sprites made for this resolution width
    target_height: int = 720 # sprites made for this resolution height
    window_width: int = 1280 # actual window width
    window_height: int = 720 # actual window height

# game details
var
    game_open: bool = true
    window_name: string = "SillyMeteors"

# sdl defaults
var
    event: Event = defaultEvent
    window: WindowPtr
    render: RendererPtr

# setup window & renderer 
window = createWindow(window_name,
    SDL_WINDOWPOS_UNDEFINED,
    SDL_WINDOWPOS_UNDEFINED,
    cint(window_width),
    cint(window_height),
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
sManager.init()

# let the scene manager load up variables outside of the game loop
sManager.load(render)

var myfont : FontObj = FontObj()
var myfont_color : sdl2.Color = helpers.toColor(0, 0, 0, 0)
myfont.create(render, "Display This", "assets/fonts/minecraftia.ttf", 60, myfont_color)

var fps: FpsManager
fps.init()
fps.setFramerate(60)

# game loop
while game_open == true:

    # poll events 
    while pollEvent(event):
        if event.kind == QuitEvent:
            game_open = false

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

# clean up window/render
destroy render 
destroy window 

#quit sdl/libraries
ttf.ttfQuit()
sdl2.quit()