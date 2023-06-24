n=int(input("enter the number: "))
half=(n+1)//2
# print(half)
for i in range(n+1):
    # print(i)
    if(i<=half):
        temp=i
        print("  "*(half-temp),end=" ")
        print("* "*((2*temp)-1))

    if(i>half):
        temp=(n+1)-i
        print("  "*(half-temp),end=" ")
        print("* "*((2*temp)-1))
