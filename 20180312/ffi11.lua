local ffi = require('ffi')
local t = ffi.load("./libffimyc.so", true)

ffi.cdef[[
void print(const char *s);
]]

a = ffi.new("const char*", "Hello World")
t.print(a)
