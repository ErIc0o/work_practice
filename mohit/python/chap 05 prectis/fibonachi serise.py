n=int(input("enter the number: "))
a=0
b=1
c=0
print(a)
i=0
while (i<n-2):
    a=b
    b=c
    c=a+b
    print(c)
    i+=1