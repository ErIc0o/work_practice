def cube(remainder):
    print(remainder)
    x=len(str(remainder))
    print(x)
    answer = None
    if x==3:
        a=(remainder*remainder*remainder)
        answer = a
        print("mohit pagla")
    elif x==4:
        a=(remainder*remainder*remainder*remainder)
        answer = a

    return answer

print()
n=int(input("enter the number:"))
i=n
org=n
while i>0:
    remainder=i%10
    temp = cube(remainder)
    print(temp)
    sum=sum + temp
    i//=10
if sum==org:
    print("your number",sum,"is armstrong number")
else:
    print ("your number",sum,"is not armstrong number")
