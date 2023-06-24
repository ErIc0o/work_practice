n=int(input("enter the number: "))
for i in range(0,n):
    print(" "*(n-1-i)+"* "*(i+1))
for i in range(n-1,0,-1):
    print(" "*(n-i)+"* "*(i))