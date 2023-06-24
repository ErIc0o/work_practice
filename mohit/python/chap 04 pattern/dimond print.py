n=int(input("enter the number: "))
for i in range(0,n):
    for j in range(0,n+4):
        if(j>=n-i and j<=3+i):
            print("*",end=' ')
        else:
            print(" ",end=' ')
    print()
for i in range(0,n):
    for j in range(0,n+4):
        if(j>=1+i and j<=7-i):
            print("*",end=' ')
        else:
            print(" ",end=' ')
    print()