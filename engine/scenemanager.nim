import sdl2
import scenes.scene 
import scenes.myscene 
import scenes.levelscene

type SceneManager* = ref object of RootObj
    scenes*: seq[Scene]

method load*(self: SceneManager; render: RendererPtr) =
    if self.scenes.len() > 0:
        for s in self.scenes:
            s.load(render)

method update*(self: SceneManager; dt: float) =
    if self.scenes.len() > 0:
        for s in self.scenes:
            s.update(dt)

method draw*(self: SceneManager; render: RendererPtr) =
    if self.scenes.len() > 0:
        for s in self.scenes:
            s.draw(render)

method events*(self: SceneManager; e: Event) =
    if self.scenes.len() > 0:
        for s in self.scenes:
            s.events(e)

method init*(self: SceneManager) =
    self.scenes = @[]
    var levelScene = LevelScene()
    var myScene = MyScene()
    self.scenes.add(levelScene)
    self.scenes.add(myScene)
