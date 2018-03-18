local ffi = require('ffi')

ffi.load('./libffimyc.so', true)

ffi.cdef[[
int add(int x, int y);
]]

ret = ffi.C.add(1, 10)
print(ret)
