type EmptyScene = ref object of RootObj

method load(self: ref EmptyScene) =
    discard

type MyScene1 = ref object of EmptyScene 

method load(self: ref MyScene1) =
    echo "My scene"

type MyScene2 = ref object of EmptyScene 

method load(self: ref MyScene2) =
    echo "My scene"

var scene1 = MyScene1
var scene2 = MyScene2