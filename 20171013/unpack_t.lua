local a = os.clock()
local t = {111,222,333,444}
for i=1,100000000 do
	unpack(t)
end
local b=os.clock()
print(b-a)


local a = os.clock()
local t = {111,222,333,444}
for i=1,100000000 do
	local m,n,p,q = t[1],t[2],t[3],t[4]
end
local b=os.clock()
print(b-a)
