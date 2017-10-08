local split = require("split")

local s = "a,b,c,d"

local f = split.my_split(s,',')

for _,v in ipairs(f) do
	print(v)
end
