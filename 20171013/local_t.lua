local a = os.clock()

for i=1,10000000 do
	local x = math.sin(i)
end

local b = os.clock()

print(b-a)


local a = os.clock()

local t = math.sin
for i=1,10000000 do
	local x = t(i)
end

local b = os.clock()

print(b-a)
