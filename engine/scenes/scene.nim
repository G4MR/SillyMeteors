import sdl2

type Scene* = ref object of RootObj

# default load method used for loading custom scene variables/assets
# before the game loop happens so we won't be causing unnecessary
# memory usage
method load*(self: Scene; render: RendererPtr) =
    discard

# each scene will have its own events that they can run 
# so say we wanted to map keys different for each scene
# then we could
method events*(self: Scene; e: Event) =
    discard 

# this method allows us to update the position on the screen
# before something gets drawn
method update*(self: Scene; dt: float) =
    discard

# draw to the renderer
method draw*(self: Scene; render: RendererPtr) =
    discard 

# draw to the renderer
method clean*(self: Scene) =
    discard 