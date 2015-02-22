type MyObj = ref object of RootObj

method output(self: MyObj) =
    echo "Output something"

type ChildObj = ref object of MyObj
    customvar: string

method newOutput(self: ChildObj) =
    self.customvar = "Child output custom var too"
    
method output(self: ChildObj) =
    echo "Child Output something too"
    self.newOutput()
    echo self.customvar

var o = MyObj()
var ochild = ChildObj()

var objs : seq[MyObj] = @[]

objs.add(o)
objs.add(ochild)

for o in objs:
    o.output()