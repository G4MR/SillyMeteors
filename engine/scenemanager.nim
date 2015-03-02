import sdl2
import tables
import scenes.scene 
import scenes.myscene 
import scenes.levelscene

import smcontainer

type SceneManager* = ref object of RootObj
    scenes*: Table[string, Scene]
    container*: SMContainer

method load*(self: SceneManager, render: RendererPtr) =
    if self.scenes.len > 0:
        for s, sObj in self.scenes:
            sObj.load(render, self.container)

method update*(self: SceneManager, dt: float) =
    
    # make sure the scenes list isn't empty & the selected secene exists
    if self.scenes.len > 0 and self.scenes.hasKey(self.container.current):
        self.scenes[self.container.current].update(dt)

method events*(self: SceneManager, e: Event) =
    
    # make sure the scenes list isn't empty & the selected secene exists
    if self.scenes.len > 0 and self.scenes.hasKey(self.container.current):
        self.scenes[self.container.current].events(e)

method draw*(self: SceneManager; render: RendererPtr) =
    
    # make sure the scenes list isn't empty & the selected secene exists
    if self.scenes.len > 0 and self.scenes.hasKey(self.container.current):
        self.scenes[self.container.current].draw(render)

method clean*(self: SceneManager) =
    if self.scenes.len > 0:
        for s, sObj in self.scenes:
            sObj.clean()

method init*(self: SceneManager) =
    
    self.container = SMContainer()
    self.container.select("LevelScene")

    # setup defaults
    self.scenes = initTable[string, Scene]()
    self.scenes.add("LevelScene", LevelScene())
    self.scenes.add("MyScene", MyScene())