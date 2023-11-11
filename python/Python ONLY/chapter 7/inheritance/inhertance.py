# class Employee:
#     company = "Google"
    
#     def showDetails(self):
#         print("This is an employee")

# class Programmer(Employee): #this is inheritance
#     language = "Python"
#     company = "YouTube"

#     def getLanguage(self):
#         print(f"The language is {self.language}")
#     def showDetails(self):
#         print("This is an programmer")

# e = Employee()
# e.showDetails()
# p = Programmer()
# p.showDetails()  #this is an example of method overwriting
# p.getLanguage()
# print(p.company)
# print(e.company)
# print(p.language)



# type of inheritance: 1. single inheritance, 2. multiple inheritance, 3. multilevel inheritance, 4. hierarchical inheritance, 5. hybrid inheritance

#multiple inheritance
class Employee:
    company = "Visa"
    eCode = 120

class Freelancer:
    company = "Fiverr"
    level = 0

    def upgradeLevel(self):
        self.level = self.level + 1


class Programmer(Freelancer,Employee): #this is multiple inheritance
    name = "Rohit"

p = Programmer()
p.upgradeLevel()
print(p.level)
print(p.company)
print(p.eCode)





#multilevel inheritance
class Person:
    country = "India"
    def takeBreath(self):
        print("I am breathing...")
class Employee(Person):
    company = "Honda"
    def getSalary(self):
        print(f"Salary is {self.salary}")
    def takeBreath(self):
        print("I am an Employee so I am luckily breathing..")
class Programmer(Employee):
    company = "Fiverr"
    def getSalary(self):
        print(f"No salary to programmers")
    def takeBreath(self):
        super().takeBreath()
        print("I am a Progarmmer so I am breathing++..")

p = Person()
p.takeBreath()
e = Employee()
e.takeBreath()
pr = Programmer()
pr.takeBreath()
print(pr.company)
