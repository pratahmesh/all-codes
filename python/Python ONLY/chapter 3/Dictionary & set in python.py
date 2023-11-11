#dictonary is a collection of key-values pairs
myDict={
    "fast": "in a quick manner",
    "prathamesh": "becomeing coder",
    "Marks": [1,2,4],
    "Anotherdict": {'illusion': 'halllusiation'},
    1: 49
}
print(myDict['fast'])
print(myDict['prathamesh'])
# myDict['Marks']=[89,69] implies it is mutable
print(myDict['Marks'])
print(myDict['Anotherdict']['illusion'])

# #properties of a python dictionary
# # it is unordered , it is mutable, inxeced, can not conntain duplicate keys

# #  operation on dictionary
# # print(myDict.keys())#prints the keys of the dictionary 
# # print(myDict.values())#prints the values of the dictionary
# # print(myDict.items())#prints the (keys,values) for all contents of the dictionary

# print(myDict)
# updateDict={
#     "friend": "harry"
#     # "prathamesh": "becomeing youtuber",  this will update the content in the outcome  
# }
# myDict.update(updateDict)#update the dictionary by key values from updateDict
# print(myDict)

# print(myDict.get("prathamesh2"))#Return 'NONE' as prathamesh2 is not present in the dictionary
# print(myDict["prathamesh2"])#throw an error as  prathamesh2 is not present in the dictionary


# # sets in python
# #set is the collection of none repeative elements 
# a={1,3,4,5,1}
# print(type(a))
# print(a)
# print('actually method')
# # empty set --> This syntax will create an empty dictionary and not an empty set
# b={}
# print(type(b))
# #an empty set can be created using the below syntax
# c=set()
# print(type(c))
# c.add(4)
# c.add(4)#will not be added coz set can't be repate the elements
# c.add(6)
# c.add(6)
# c.add(6)
# c.add(8)
# c.add(9)
# # c.add([4,5,6])  #cannot add list or dictionary to sets coz it can be altered or changed in HASH 
# # c.add({4: 5})
# c.add((4,5,6))
# print(c)
# print(len(c)) #prints the length of the sets
# c.remove(4) #removes 4 from set 
# # c.remove(14) throw an error which is not in sets
# print(c,'removes 4 from set')
# # properties of sets
# # sets are unordered, unindexed , their is no why changes items in sets ,dont conntain duplicate values
# print(c.pop(),'shows the removed elements')#removes an arbitary elemnts from the set and returns the elements removed
# print(c,'elemnts apart from the removed elemnts')
# # print(c.clear()) empties the set c
# # print(c.union({8,9}))#returns a new set with all items from both sets
# # print(c.intesection({8,9}))#return a set which contains only items in both sets

