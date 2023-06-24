# def apply(fx,value):
#     return 6+fx(value)
# cube= lambda x:x*x*x
# print(apply(cube,2))

# cube= lambda x: x*x*x
# l=[1,8,10,12,6]
# newl=list(map(cube,l))
# print(newl)
# n=int(map(list,input().split(",")))
# print(n)
# class student:
#     def __init__ (self):
#         self.name=input("enter the name:  ")
#         self.rollno=int(input("enter the rollno: "))
#     def display(self):
#         print("name",self.name)
#         print("rollno",self.rollno)
# class person(student):
#     def show(self):
#         print("op")



# b=person()
# b.display()
# b.show()


class mohit:
    def __init__(self,name,rollno):
        self.name=name
        self.rollno=rollno
    def print(self):
        print(f"{self.name},{self.rollno},{self.graduation}")

class student(mohit):
    def __init__(self, name, rollno,year):
        # mohit.__init__(self,name, rollno)
        super().__init__(name,rollno)
        self.graduation=year
    def welcome(self):
        print("welcome", self.name,self.rollno,self.graduation )
m=student("mohit",2,2019)
m.welcome() 