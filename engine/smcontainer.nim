import tables
import window_properties

import "../defaults"

# smContainer - scene manager container
# We need a way to change scenes in the scene manager
# Without having include conflicts

type SMContainer* = ref object of RootObj
    window*: WindowProperties
    current*: string
    defaults*: Defaults

method init*(self: SMContainer; wproperties: WindowProperties,
    default: Defaults) =
    self.defaults = default
    self.window = wproperties
    
method select*(self: SMContainer, scene: string) =
    self.current = scene