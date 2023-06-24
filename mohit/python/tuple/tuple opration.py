otuple=(1,2,3,4,5,6)
print(id(otuple))

y=list(otuple)
# y.extend([7,8,9])
y.append([7,8,9])
otuple=tuple(y)
print(id(otuple)) # for memory location 

# (*a,b,c)=otuple
# print(a)
# print(b)
# print(c)

otuple=otuple*2
print(otuple)

otuple=otuple*2

