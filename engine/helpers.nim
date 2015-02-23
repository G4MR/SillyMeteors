import sdl2

#proc that makes creating color tuples less painful
proc toColor*(color: tuple[r: int, g: int, b: int, a: int]): sdl2.Color = (uint8(color.r), uint8(color.g), uint8(color.b), uint8(color.a))

#proc that makes creating sdl rects less painful
proc toRect*(rect: tuple[x, y: int; w, h: int]): sdl2.Rect = (cint(rect.x), cint(rect.y), cint(rect.w), cint(rect.h))