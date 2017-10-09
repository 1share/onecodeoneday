local mt = {}
local N = 2
local M = 3

for i = 1, N do
	mt[i] = {}
	
	for j = 1, M do
		--mt[i][j] = i * j
		mt[i][j] = (i - 1) * M + j
	end
end

for _,v in ipairs(mt) do
	--print(v)
	for _,vv in ipairs(v) do
		print(vv)
	end
end

print('--------------')

local mt = {}
local N = 2
local M = 3

for i = 1, N do
	for j = 1, M do
		mt[(i - 1) * M + j] = (i - 1) * M + j
	end
end

for _,v in ipairs(mt) do
	print(v)
end

