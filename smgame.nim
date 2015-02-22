import sdl2
import engine.scenemanager

discard init(INIT_EVERYTHING)

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

render = createRenderer(window, -1,
    Renderer_Accelerated or Renderer_TargetTexture)

# scene manager
var sManager: SceneManager = SceneManager()

# setup scenes
sManager.init()

# let the scene manager load up variables outside of the game loop
sManager.load(render)

# game loop
while game_open == true:

    # poll events 
    while pollEvent(event):
        if event.kind == QuitEvent:
            game_open = false

        #run custom events
        sManager.events(event)

    #update 
    #sManager.update()

    # update screen
    render.setDrawColor(255, 0, 0, 255)
    render.clear()

    # draw to screen
    sManager.draw(render)

    render.present()

# clean up 
destroy render 
destroy window 