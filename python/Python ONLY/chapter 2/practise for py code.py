# name=input("enter your name: ")
# op='good morning '
# print(op+name)

letter='''Dear <|name|>
Yor are selected!
have a great day  ahead
Date: <|DATE|>
'''
name=input("enter your name: ")
date=input("enter data: ")
letter=letter.replace("<|name|>",name) #we r ccoping the sring in the letter orelse we will get a error
letter=letter.replace("<|DATE|>",date)
print(letter)
# -->output
# enter your name: prathamesh
# enter data: 3/3/23
# Dear prathamesh  
# Yor are selected!
#have a great day ahead
# Date: 3/3/23  

# doublespace=letter.find("  ") #if double space is presnt we get the index of it 
# print(doublespace)

doublespace=letter.replace("  ","! ") #we can replace the double space with any vale not any ds but also other variable as well 
print(doublespace)