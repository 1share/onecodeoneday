local t = {}

for i = 1,10 do
	t[i]=i
end

print(#t)
print('++++')
for _,v in ipairs(t) do
	print(v)
end
print('++++')
for _,v in pairs(t) do
	print(v)
end

print('-------------------')
t[3] = nil


print(#t)

print('++++')
for _,v in ipairs(t) do
	print(v)
end
print('++++')
for _,v in pairs(t) do
	print(v)
end
