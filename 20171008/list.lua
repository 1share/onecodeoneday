local List = {}

	--创建一个节点
function List.new(val)
	return {pnext = nil, value = val}
end

	--往一个节点后添加一个节点
function List.addNode(nodeParent, nodeChild)
	nodeChild.pnext = nodeParent.pnext
	nodeParent.pnext = nodeChild
	return nodeChild
end

	--输出链表
function List.print(list)
	while list do
		print(list.value)
		list = list.pnext
	end
end

return List

