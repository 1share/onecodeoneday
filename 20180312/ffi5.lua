local ffi = require('ffi')
local t = ffi.load("./libffimyc.so", true)

ffi.cdef[[
int add(int x, int y);
]]

print(t.add(10, 11))

