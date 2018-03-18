local ffi = require('ffi')

ffi.cdef[[
struct s1 {
    int a;
    int b;
};
typedef struct {
    int c;
    int d;
} s2;
union u {
    int a;
    long b;
    float c;
};
enum e {
    Male,
    Female
};
]]

print(ffi.typeof("int8_t"))
print(ffi.typeof("uint8_t"))
print(ffi.typeof("int16_t"))
print(ffi.typeof("uint16_t"))
print(ffi.typeof("int32_t"))
print(ffi.typeof("uint32_t"))
print(ffi.typeof("int64_t"))
print(ffi.typeof("uint64_t"))
print(ffi.typeof("double"))
print(ffi.typeof("float"))
print(ffi.typeof("bool"))
print(ffi.typeof("struct s1"))
print(ffi.typeof("s2"))
print(ffi.typeof("union u"))
print(ffi.typeof("enum e"))
print(ffi.typeof("struct s1*"))
print(ffi.typeof("struct s1[]"))
