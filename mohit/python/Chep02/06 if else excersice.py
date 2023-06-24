import time
tym=int(time.strftime('%H'))
print(tym)
if(tym<12):
    print("good moring")
elif(tym<=12 and tym<=17):
    print("good afternoon")
elif(tym>=17):
    print("good evening")
