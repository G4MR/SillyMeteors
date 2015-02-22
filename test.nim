type EmptyScene = ref object of RootObj

method load(self: ref EmptyScene) =
    discard

type MyScene1 = ref object of EmptyScene 

method load(self: ref MyScene1) =
    echo "My scene"

type MyScene2 = ref object of EmptyScene 

method load(self: ref MyScene2) =
    echo "My scene"

var myscenes: seq[ref EmptyScene] = @[]

var scene1 = new MyScene1
var scene2 = new MyScene2 

myscenes.add(scene1)
myscenes.add(scene2)