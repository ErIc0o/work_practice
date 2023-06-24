if __name__ == '__main__':
    n = int(input("enter the number: "))
    arr = map(int, input("enter all nu: ").split())
    max=0
    smax=0
    for i in arr:
        if(i==0):
         max=i
         smax=i
        elif(i>=max):
           smax=max
           max=i
        elif i==smax:
            
           smax=i
print(smax)
           
    