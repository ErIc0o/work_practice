principal=float(input("enter the principal: "))
rate=float(input("enter the rate: "))
time=float(input("enter the time: "))
amount=principal*(pow((1+rate/100),time))
ci=amount-principal

#1. %s ka use karke print karna
print("principal = %s, time = %s, rate = %s, amount=%s, CI=%s" %(principal,time,rate,amount, ci))

mohit = "kuch bhi"
#2. using fstring
print(f"principal = {principal} time = {time},rate = {rate}, amount={amount}, CI={ci}")

#3. fstring with \n ka use
print(f"principal = {principal}\ntime = {time}\nrate = {rate}\namount={amount}\nCI={ci}")

#4. fstring with multiline string
print(f'''
principal = {principal}
time = {time}
rate = {rate}
amount={amount}
CI={ci}
''')

#5. using format function with arguments if format values are not in sync with {} values.
print("principal = {4} time = {0},rate = {1}, amount={2}, CI={3}".format(time,rate,amount,ci,principal))

#6. using format function
print("principal = {} time = {},rate = {}, amount={}, CI={}".format(principal,time,rate,amount,ci))
