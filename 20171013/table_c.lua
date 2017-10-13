local a = os.clock()
for i=1,3000000 do
	local t={}
	t[1]=1
	t[2]=2
	t[3]=3
end

local b = os.clock()

print(b-a)


local a = os.clock()
for i=1,3000000 do
	local t={1,2,3};
	t[1]=1
	t[2]=2
	t[3]=3
end

local b = os.clock()

print(b-a)
