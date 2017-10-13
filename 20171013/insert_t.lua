local a = os.clock()

local t = {}
for i=1,10000000 do
	table.insert(t,i)
end

local b = os.clock()
print(b-a)


local a = os.clock()

local t = {}
for i=1,10000000 do
	t[i] = i
end

local b = os.clock()
print(b-a)


local a = os.clock()

local t = {}
for i=1,10000000 do
	t[#t+1] = i
end

local b = os.clock()
print(b-a)


local a = os.clock()

local t = {}
local j = 1
for i=1,10000000 do
	t[j] = i
	j = j + 1
end

local b = os.clock()
print(b-a)









































