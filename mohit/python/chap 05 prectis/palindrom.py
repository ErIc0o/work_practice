n=int(input("enter the number: "))
temp=n
sum=0

while(n>0):
    remainder=n%10
    sum=sum*10+remainder
    n//=10
    print(remainder)
if(sum==temp):
    print("pellendrom")
else:
    print("not pellendrom")