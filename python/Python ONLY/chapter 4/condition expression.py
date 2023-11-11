# #if-elif-elif-else laddar
# a=45
# if(a<3):
#     print("the value of a is less then 3")
# elif(a<7):
#     print("the value of a is less then 7")
# elif(a<17):
#     print("the value of a is less then 17")
# elif(a<87):
#     print("the value of a is less then 87")
# else:
#     print("the value of a is not less then 3 or 7")


# age=int(input("enter your age"))
# if(age>34 and age<56):
#     print("you can work with us")
# else:
#     print("you can not work with us")
#and and or are relational opertator
   #boolen op 'in' and 'is' are used to get the true or false value is is used to point the same values whereas in is used for checking is it present in list or not if present it will return true or else it will return false 


#write a program to find out whether a student ispass or fail , if it requires total 40% and atleat 33% in each subject to pass in 3subject and take marks as an input from the user
# sub1=int(input("Enter first subject marks\n"))
# sub2=int(input("Enter second subject marks\n"))
# sub3=int(input("Enter third subject marks\n"))
# o=(sub1+sub2+sub3)/3
# if(sub1<33 or sub2<33 or sub3<33):
#     print("your are fail")
# elif(o<40):
#     print("you are fail due to total percentage less then 40")
# else:
#     print("congratulation! your are passed ")



#IDENTFY  the spam massages ditection #Buy now to get in freeThis text is spam
text = input ("Enter the text\n")

if("make a lot of money" in text):
    spam=True
elif("Buy now" in text):
    spam=True
elif("click this" in text):
    spam=True
elif("subscribe this" in text):
    spam=True
else:
    spam=False

if(spam):
        print("This text is spam")
else:
            print("This text is not spam")


