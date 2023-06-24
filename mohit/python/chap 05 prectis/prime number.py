
n=int(input("enter the number: "))
for i in range(2,n):
    count=0
    for j in range(2,i-1):
        if(i%j==0):
            count=count+1
            continue 
    if(count==0) :
        print(i)