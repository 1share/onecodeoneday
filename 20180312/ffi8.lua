local ffi = require('ffi')
local t = ffi.load("./libffimyc.so", true)

ffi.cdef[[
int add(int x, int y);
int addp(int *x, int *y);
]]

a = ffi.new("int[1]", {10})
b = ffi.new("int[1]", {10})
print(t.addp(a, b))
