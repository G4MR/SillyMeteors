# smContainer - scene manager container
# We need a way to change scenes in the scene manager
# Without having include conflicts

type SMContainer* = ref object of RootObj
    current*: string

method select*(self: SMContainer, scene: string) =
    self.current = scene