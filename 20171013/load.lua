
local loadstr = loadstring("local t = 'go';print(t)")
loadstr()

local insert = loadfile("insert_t.lua")
local local_t = loadfile("local_t.lua")
local str_t = loadfile("str_t.lua")
local table_c = loadfile("table_c.lua")
local unpack_t = loadfile("unpack_t.lua")

insert()
local_t()
str_t()
table_c()
unpack_t()

local loadstr = loadstring("local t = 'end';print(t)")
loadstr()
