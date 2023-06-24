n= int( input("enter the number: "))
'''h=1#agr hme sequence m triangle print krwana h to loop k bahar hi value lange
for i in range(0,n):
    h=1 # agr hme bar bar ek number se aage hi print krwana h to hm loop k andr value lenge
    for j in range(0,n+1):
        if(j<=n-i):
            print(" ",end=" ")
        else:
            print(h,end=" ")
            h=h+1
    print()  '''
for i in range(0,n):
    h=1
    for j in range(n,0,-1):
        if(j>i):
            print(" ",end=" ")
        else:
            print(h,end=" ")
            h=h+1
    print()      