class Programmer:
    company = "Microsoft"

    def __init__(self, name, product):
        self.name = name
        self.product = product

    def getInfo(self):
        print(f"The name of the {self.company} programmer is {self.name} and the product is {self.product}")
    
    def getinfo(self):
        print(f"The name of the {self.company} programmer is {self.name} and the product is {self.product}")

harry = Programmer("Harry", "Skype")
alka = Programmer("Alka", "GitHub")
harry.getInfo()
alka.getInfo()




class Calculator:
    def __init__(self,num):
        self.number = num
    def square(self):
        print(f"The value of {self.number} square is {self.number **2}")
    def squareRoot(self):
        print(f"The value of {self.number} square root is {self.number **0.5}")
    def cube(self):
        print(f"The value of {self.number} cube is {self.number **3}")

a= Calculator(9)
a.square()
a.squareRoot()
a.cube()




class Sample:
    a = "Prathamesh"

obj = Sample()
obj.a = "Harry"#this is an instance attribute
# sample.a = "Harry"#this makes changes in the class attribute
print(Sample.a)#this is a class attribute prints Prathamesh
print(obj.a)#this is an instance attribute prints harry




class Sample:
    def __init__(self,name):
        self.name = name
    def greet(self):
        print(f"Hello {self.name}")
    def welcome(self):
        print(f"Welcome {self.name}")
    def bye(self):
        print(f"Bye {self.name}")

s1 = Sample("Prathamesh")
s1.greet()
s1.welcome()
s1.bye()




class Train:
    def __init__(self,name,fare,seats):
        self.name = name
        self.fare = fare
        self.seats = seats
    def getStatus(self):
        print("*************")
        print(f"The name of the train is {self.name}")
        print(f"The seats available in the train are {self.seats}")
        print("*************")
    def fareInfo(self):
        print(f"The price of the ticket is: Rs {self.fare}")
    def bookTicket(self):
        if(self.seats>0):
            print(f"Your ticket has been booked! Your seat number is {self.seats}")
            self.seats = self.seats - 1
        else:
            print("Sorry this train is full! Kindly try in tatkal")
    def cancelTicket(self,seatNo):
        pass

intercity = Train("Intercity Express: 14015",90,2)
intercity.getStatus()
intercity.fareInfo()
intercity.bookTicket()
intercity.bookTicket()
# intercity.bookTicket()#this will not book the ticket because the seats are full
intercity.getStatus()




class Sample:
    a = "Prathamesh"
    def __init__(s,name):
        s.name = name

obj = Sample("Harry")
obj.a = "Rohan"
print(obj.name)#this will print Harry
print(obj.a)#this will print Rohan
print(Sample.a)#this will print Prathamesh
    