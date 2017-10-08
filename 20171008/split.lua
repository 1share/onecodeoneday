local function my_split(s, sep)
	local fields = {}
	local sep = sep or '\t'

	local pattern = string.format("([^%s]+)", sep)
	string.gsub(s, pattern, function(c) fields[#fields+1] = c end)

	return fields
end


local _M = {
	my_split = my_split,
}

return _M
