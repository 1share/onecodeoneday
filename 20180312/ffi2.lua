local ffi = require('ffi')

myc = ffi.load('./libffimyc.so')

ffi.cdef[[
int add(int x, int y);
]]

ret = myc.add(1, 20)
print(ret)

