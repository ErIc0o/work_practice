# odict={
#     'brand':'ford',
#     'model':'mustang',
#     'year':'1964'
# }
# print(odict)
# print("length",len(odict))
# print("memory location",id(odict))
# print(odict['brand'])#dict ki valude access krna

# # 2- get()
# print(odict.get("brand"))

# #3-keys()
# print(odict.keys())

# #4- add new key in dict
# odict["color"]='white'
# print(odict.keys())

# #5 add  new value and accessing value
# odict["color"]="red"
# print(odict.values())

# #6 items()
# print(odict.items())

# #7 update()
# odict.update({'car type':'muscle'})#update value update krne ko v use krte h
# print(odict)
# odict.update({'year':1999})
# print(odict)

# #8 pop()
# odict.pop('car type')
# print(odict)

# #8.1 popitem()#last item hta dega
# odict.popitem()
# print(odict)

# #9 del()
# del odict['year']
# print(odict)

# #9.1 del()
# # del odict
# # print(odict)

# #10 clear()
# # odict.clear()
# # print(odict)

# #11 copy()
# oydict= odict.copy()
# print(oydict)

# #12 dict()
# hoydict=dict(odict)
# print(hoydict)

# #NESTED DICTIONARY
# cars={
#     "car1":{
#         'brand':'lemborgini',
#         'year':'2023'
#     },
#     "car2":{
#         'brand':'farari',
#         'year':'2023'
#     },
#     "car3":{
#         'brand':'bugati',
#         'year':'2023'
#     }

# }
# print(cars)

# #NESTED DICTIONARY
# car1={
#         'brand':'lemborgini',
#         'year':'2023'
# }
# car2={
#     'brand':'farari',
#     'year':'2023'
# }
# car3={
#     'brand':'bugati',
#     'year':'2023'
# }
# cars={
#     "car1":car1,
#     "car2":car2,
#     "car3":car3
# }
# print(cars["car1"]['brand'])

# #ACCESSING ITEM IN NASTED DICTIONARY
# print(cars["car1"]["brand"])

# car_dict = {
#             "brand": ["Lmb", "Suzuki", "Toyota", "Rolls Royce"],
#             "year" : [1940, 1950, 1960, 1970],
#             "Model" : ["Lmb-Chiron", "Alto", "Fortuner", "RC-Ghost"]
# }

# for i in car_dict.keys():
#     #print(i, car_dict[i])
#     print(i,car_dict.get(i))
# 
# for i in car_dict.values():
#     print(i)

#mylist=["brand"["Lmb", "Suzuki", "Toyota", "Rolls Royce"],"year"[1940, 1950, 1960, 1970],"Model"["Lmb-Chiron", "Alto", "Fortuner", "RC-Ghost"]]

car_list = [
                ["brand", ["Lmb", "Suzuki", "Toyota", "Rolls Royce"]], 
                ["year",[1940, 1950, 1960, 1970]], 
                ["Model", ["Lmb-Chiron", "Alto", "Fortuner", "RC-Ghost"]]
           ]

for x in car_list:
        print(x)

# for i in car_list:
#     print(i[1][1])
# x=len(car_list)
# print(x)
# i=0
# while i<len(car_list):
#     print(car_list[i][1][-1])
#     i+=1
# for i in range(0,len(car_list)): # range(0,3,1) = 0, 1, 2
    # if(car_list[i]=="Alto" or car_list[i][1]=="Alto" or car_list[i][1][1]=="Alto" ):
    #     print(True)
    #     if():
    #         print
    # else:
    #     print(False)

    #     # print(car_list[i][1][1])
    #    print(len(car_list[i]))
    # for i in range(0,len(car_list[i]))
# print(car_list[2][1][1])
    
# family={
#     'name':["ram","ravan","hanuman"],
#     'age':[12,13,14]
# }
# for key ,value in family.items():
#     print(key,value)

# for i in family.keys():
#     print(i)   
# for i in family.values():
#     print(i)