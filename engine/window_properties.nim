
# This is my way of passing window data to scenes

type WindowProperties* = ref object of RootObj
    name*: string
    width*: cint     # actual window width
    height*: cint    # actual window height
    t_width*: cint   # sprites made for this resolution width
    t_height*: cint  # sprites made for this resolution height

# Get int dimensions, instead of the cint equivalent
method getWidth*(self: WindowProperties): int =
    result = int(self.width)

method getTWidth*(self: WindowProperties): int =
    result = int(self.t_width)

method getHeight*(self: WindowProperties): int =
    result = int(self.height)

method getTHeight*(self: WindowProperties): int =
    result = int(self.t_height)

# Initialize properties, set them to cint values
method init*(self: WindowProperties; name: string, w, h, tw, th: int) =
    self.name = name
    self.width = cint(w)
    self.height = cint(h)
    self.t_width = cint(tw)
    self.t_height = cint(th)