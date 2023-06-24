n=int(input("entr the number: "))
half=(n+1)//2
j=1
k=1
for i in range(1,n+1):
    if(i<=half):
        temp=i
    else:
        temp=(n+1)-i
    # for j in range(1,(half-temp)+1):
        #print(" ",end=" ")
    print("  "*(half-temp), end=" ")
    # for k in range(1,((2*temp)-1)+1):
        #print("*",end=" ")
    print("* "*((2*temp)-1), end=" ")
    print("\r")