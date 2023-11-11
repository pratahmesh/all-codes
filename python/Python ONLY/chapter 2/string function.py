story='''once upon a time there was a coder named prathamesh who was trying to learn python'''
#string function
print(len(story)) #tell the length of the string
print(story.endswith("learn")) #false because string doesnt end with learn
print(story.endswith("python")) #true because string doesnt end with python
print(story.count("a")) #it counts total no. of given word or letter
print(story.count("was"))  #it counts number of given keywords in the string
print(story.capitalize())  #it capitalize the first word
print(story.find("prathamesh")) #find is used tp find the position of given keyword -->41 is the index for p
print(story.find("opshake")) #hence given keyword is not their in string it will print -1 in output
print(story.replace("prathamesh","vivo")) #it repalces the keyword with given keyword  in the string

kahani="prathamesh is best.\nHe\t is ve\\ry best among everyone" 
print(kahani)
#\n is used to get in new line  --their are called as the escape squence cahrecter 
#\t give a tab/space in between \\ gives \ in between only /is not allowed
#--> output
# prathamesh is best.
# He       is ve\ry best among everyone
