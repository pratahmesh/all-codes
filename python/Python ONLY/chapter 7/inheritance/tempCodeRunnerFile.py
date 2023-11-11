class Person:
    country = "India"
    def __init__(self):
        print("Initializing Person...\n")
    def takeBreath(self):
        print("I am breathing...")
class Employee(Person):
    company = "Honda"
    def __init__(self):
        super().__init__()
        print("Initializing Employee...\n")
    def getSalary(self):
        print(f"Salary is {self.salary}")
    def takeBreath(self):
        print("I am an Employee so I am luckily breathing..")
class Programmer(Employee):
    company = "Fiverr"
    def getSalary(self):
        print(f"No salary to programmers")
    def takeBreath(self):
      #  super().takeBreath() # spuer() is used to call the method of the parent class
        print("I am a Progarmmer so I am breathing++..")

# p = Person()
# p.takeBreath()
e = Employee()