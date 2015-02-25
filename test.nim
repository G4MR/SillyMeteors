type MyObj = ref RootObj

var oj: MyObj

if isNil(oj):
    echo "is nil"
else:
    echo "not nil"