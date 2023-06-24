a=int(input("enter the value of a: "))
b=int(input("enter the value of b: "))

print("using third variable ")
c=None # or direct we can put the vlue into "c" like "c=a"
c=a
a=b
b=c
print(a,b,sep=",")

print("1= without using third variable ")
b,a=a,b
print(a,b,sep=",")

print("2= without using third variable ")
a=a+b
b=a-b
a=a-b
print("after swapping")
print(f"a={a},b={b}")