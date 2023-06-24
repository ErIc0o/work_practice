car_list = [
                ["brand", ["Lmb", "Suzuki", "Toyota", "Rolls Royce"]], 
                ["year",[1940, 1950, 1960, 1970]], 
                ["Model", ["Lmb-Chiron", "Alto", "Fortuner", "RC-Ghost"]]
           ]

# if Alto is present in the above list then replace it with Breeza
# print(car_list)
print("values before changing:")
for x in car_list:
    print(x)
print()

for i in range(0,len(car_list)):
    if(type(car_list[i]) is list ):
        for j in range(0, len(car_list[i])):
            if(type(car_list[i][j]) is list ):
                for x in range(0, len(car_list[i][j])):
                    if car_list[i][j][x] == "Alto":
                        car_list[i][j][x] = "Breeza"

print("values after changing: ")
for x in car_list:
    print(x)

print()
#print(type(car_list[0][1]))