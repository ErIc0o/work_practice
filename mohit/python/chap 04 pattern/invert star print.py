n=int(input("enter the number: "))
for i in range(0,n+1):
    for j in range(0,n+1-i):
        print("*",end=" ")
    print("\r")