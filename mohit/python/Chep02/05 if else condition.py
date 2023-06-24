a=int(input("enter your age: "))
print(a<=18)
print(a==18)
print(a>18)
print(a!=18)
if(a>18):
    print("you are aligible for drive")
elif(a>=18):
    print("you canr drive but be cearfull while driving")
    if(a==18):
        print("you can drive")
    elif(a<=18):
        print("no you cant drive")
else:
    print("you are not aligible for drive")