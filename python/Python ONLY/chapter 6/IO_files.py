# use open() to open a file to read or write the file
f=open('sample.py','r')
f=open('sample.py')#by default it is read mode
data=f.read()
data=f.read(5) #read first 5 characters from the file
data=f.readline() #read first line from the file
data=f.readline() #read second line from the file but leave a line gapbetween first and second line because of \n
print(data)#print the data in read mode


#modes of opening a file
# r - read mode
# w - write mode
# a - append mode
# r+ - read and write mode
# rb - read binary mode
# rt - read text mode, default t mode

#write mode
f=open('sample.py','w')#write mode
f.write('Please write this to the file\n')#it will overwrite the file

#append mode
f=open('sample.py','a')#append mode
f.write('Please write this to the file\n')#it will append the file
#append is used to add data to the file in the end of the file
#the number of times you run the program the data will be added to the file

with open('sample.py','r') as f:#with statement is used to open the file and close the file automatically
    a=f.read()
    print(a)

    

f.close()#close the file