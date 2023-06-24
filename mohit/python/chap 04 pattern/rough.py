n=int(input("enter the number: "))
for i in range(0,n+1):
    for j in range(0,(n-1)*2):
        if(j>=(n+1)-i and j<=3+i):
            print(" ",end=" ")
        else:
            print("*",end=" ")
        
    print()      