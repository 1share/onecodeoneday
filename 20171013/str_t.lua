local a = os.clock()

local s = ''
for i=1,100000 do
	s = s .. 'a'
end

local b = os.clock()

print(b-a)



local a = os.clock()

local s = ''
local t = {}
for i=1,100000 do
	t[#t+1] = 'a'
end

s = table.concat(t, '')

local b = os.clock()

print(b-a)









