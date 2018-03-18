local ffi = require('ffi')
local t = ffi.load("./libffimyc.so", true)

ffi.cdef[[
int add(int x, int y);
]]

ti = ffi.typeof("int")
a = ffi.new(ti, 10)
b = ffi.new("int", 11)
print(type(a), type(b))
print(t.add(a, b))
