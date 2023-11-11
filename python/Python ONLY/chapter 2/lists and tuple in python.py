#create a list using []
a=[1,2,4,56,6]
print(a)
print(a[4])
#print the list using print() funtion 
#we can change the elemests external
a[1]=3 #changed value
print(a)#list mai bhi index 0 se start karte hai

#list is same as that of string
#we can create a list with different data types
c=[45,"harry",True,4.5]
print(c)
# slicing is the limiting point which is itself is excluded same as strig
#list methods
l1=[1,51,45,34,9]
print(l1,"is the unsorted list")
# l1_sorted=l1.sort() here this will not be copied in the funtion
l1.sort() #it sorted directly 
print(l1,"is the sorted list")
l1.reverse()
print(l1,"is the reverses of list")
l1.append(85)#appends at the end of the list
print(l1,"45 is added at end due to append")
l1.pop(5)#removes element at 5
l1.insert(1,44)
print(l1,"44 is inserted in index 1")
l1.remove(51)#removes the element itself
print(l1)
#the list is sorted and reversed hence output is meshed up
#if we use all indivally we will be get disired result


#creating a tuple using ()
t=(1,43,345,1,7,88,9,1)
print(t)
#t1=() empty tuple
#t1=(1) wrong way to declare tuple
t1=(1,)
print(t1)
#in tuple we cannot updated or changed elements,they are immutable
#method of tuple 
print(t.count(1),"<- count the no. repeated")
print(t.index(345), "tell us the index no.")
