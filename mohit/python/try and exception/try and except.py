# a=input("enter the number:")
# try:
#     for i in range(1,11):
#         print(f"{int(a)}x{i}={int(a)*i}")
# except:
#     print("shi nhi hs")
a=[1,3]
try :
    try:
        5/0
        print(a[4])
    except IndexError:
        print("index error")
    numm= int(input("enter the number:"))
    print(a[4])
except ValueError:
    print("not a interzer")
except ZeroDivisionError:
    print('jiiii')
except Exception :
    print("nht glt")

