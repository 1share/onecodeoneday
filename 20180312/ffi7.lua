local ffi = require('ffi')
local t = ffi.load("./libffimyc.so", true)

ffi.cdef[[
int add(int x, int y);
]]

ti = ffi.typeof("int")
a = ti(10)
b = ti(11)
print(t.add(a, b))
