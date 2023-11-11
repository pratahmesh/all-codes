# def maximum(num1, num2, num3):
#     if (num1 > num2):
#         if (num1 > num3):
#             return num1
#         else:
#             return num3
#     else:
#         if (num2 > num3):
#             return num2
#         else:
#             return num3

# m = maximum(13, 15, 17)
# print("The value of the maximum is " + str(m))



# def farh(cel):
#     return(cel*9/5) + 32 

# c=37
# f=(farh(c))
# print("Farheneit temperature of " + str(f))


# end is used to print the next print statement in the same line
# print ("Hello", end=" ") 
# print ("How", end=" ")
# print ("Are", end=" ")
# print ("You", end=" ")


# n=6
# for i in range(n):
#     print("*" * (n-i))



def remove_and_split(string,word):
    newStr=string.replace(word,"")
    return newStr.strip()

this = "    prathamesh is good boy     "
n=remove_and_split(this,"prathamesh")
print(n)
# print(this)
# print(this.strip()) #strip is used to remove the spaces from the string



