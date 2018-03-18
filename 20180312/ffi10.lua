local ffi = require('ffi')
local t = ffi.load("./libffimyc.so", true)

ffi.cdef[[
struct constr_t {
    int a;
    int b;
    struct innerstr {
        int x;
        int y;
    } c;
};
void print_pconstr_t(struct constr_t *t);
]]

a = ffi.new("struct constr_t", {1, 2, {10, 11}})
t.print_pconstr_t(a)
