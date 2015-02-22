import scene, sdl2

type MyScene* = ref object of Scene
    customvar*: string

method cust*(self: MyScene): string =
    self.customvar

#my scene methods
method load*(self: MyScene; render: RendererPtr) =
    self.customvar = "testing my custom var"
    echo self.cust()

# each scene will have its own events that they can run 
# so say we wanted to map keys different for each scene
# then we could
method events*(self: MyScene; e: Event) =
    discard 

# this method allows us to update the position on the screen
# before something gets drawn
method update*(self: MyScene; dt: float) =
    discard

# draw to the renderer
method draw*(self: MyScene, render: RendererPtr) =
    discard 

# draw to the renderer
method clean*(self: MyScene) =
    discard 