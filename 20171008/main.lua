--test split function
print('--test begin--')
local split = require("split")

local s = "a,b,c,d"

local f = split.my_split(s,',')

for _,v in ipairs(f) do
	print(v)
end
print('--test over--')

--test lua list
print('--test begin--')
local List = require "list"
        --实现尾部插入
pHead = List.new(1)
local node = pHead

for i=2, 10 do
        node = List.addNode(node, List.new(i))
end

List.print(pHead)
print('----')
        --实现头部插入
pHead = List.new(10)

for i=1, 9 do
        List.addNode(pHead, List.new(i))
end

List.print(pHead)
print('--test over--')
