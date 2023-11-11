#class is a blueprint of object, class is like a valid form to be filled by data  , object is like a applicant form filled with data
# apne aap mai vo memory nhi leti islyle objects ka use karne padta h/ai

# class RailwayForm:
#     formType = "RailwayForm"
#     def printData(self):
#         print(f"Name is {self.name}")
#         print(f"Train is {self.train}")

# # a = input("Enter your name: ") it works
# harrysApplication = RailwayForm()
# harrysApplication.name = "Prathamesh"
# harrysApplication.train = "Rajdhani Express"
# harrysApplication.printData()

# cases camelCase, PascalCase, snake_case, kebab-case
# camelcase example: isEveryFirstLetterCapital



# class Employee:
#     company = "Google"
#     salary = 100    # class attribute
# harry = Employee()
# rajni = Employee()
# # instance attribute, more preference is given to instance attribute than class attribute
# harry.salary = 300  
# rajni.salary = 400
# print(harry.company)
# print(rajni.company)
# Employee.company = "YouTube"
# print(harry.company)
# print(rajni.company)
# print(harry.salary)
# print(rajni.salary)




#self is a parameter which is used to access the class attributes inside the class
#we can use it in both class and instance method
# class Employee:
#     company = "Google"
#     def getSalary(self):
#         print("salary is 100k")

# harry = Employee() # this is an object of class Employee
# harry.getSalary() # Employee.getSalary(harry) # self is a parameter which is used to access the class attributes inside the class 
#the error of passing 1 argument is because the function getSalary() is taking 1 argument which is self  , so we have to pass harry as an argument




class Employee:
    company = "Google"
    def getSalary(self,signature):
        print(f"salary for this employee working in {self.company} is {self.salary}\n{signature}" ) #self.salary is actually harry.salary beacuse harry is an object of class Employee and salary is an attribute of class Employee, so harry.salary is same as self.salary,self is like apointing it to be harry
        #signature is a parameter which is used to pass a message to the function in the end or in form of argument
    @staticmethod #this is a decorator which is used to make a function static
    def greet():
        print("Good Morning, Sir")
    
    @staticmethod
    def time():
        print("The time is 9AM in the morning")

harry = Employee()# harry is an object of class named Employee
harry.salary = 100000
harry.getSalary("Thanks!")
harry.greet() #or Employee.greet()
#the blank argument in greet() is because greet() is taking 0 arguments and we are passing 1 argument which is harry, so we have to pass staticmethod in greet() to make it work
harry.time() #or Employee.time()





