a=int(input("enter the number: "))
h=1
for i in range(a+1):
    for j in range(a+1):
        if(j<=(a-i)):
         print(" ",end=" ")
        else:
         print(h,end=" ")
         h=h+1

    print("\r")