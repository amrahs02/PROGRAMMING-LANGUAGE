#list is list
from distutils.util import change_root
import tempfile


grocery=["Deo","vim", "phone", "lollypop"]
print (grocery[3])
#print (grocery[8])#out of index
numbers=[3,5,6,8,4,9]
print (numbers)
print (numbers[2])
print (numbers.sort())
print(numbers)#you have to print after using functions like reverse , sort etc.
print(numbers.reverse())
print(numbers)

#slicing of list
print (numbers[1:4])#it starts with 1 not with zero , but list incdex is starts with zero
#and more importantly it do not change the original number list unlike .sort function and reverse function
print(len(numbers))
print(min(numbers))
print(max(numbers))
#append add the numbers in the end
numbers.append(78)
numbers.append (1,5)#5 at index 1
numbers[1]=90
print numbers
#Mutable = can change 
#Immutable - cannot change_root
#tuple
tp=(1,)
print (tp)
a=1
b=8
temp=a
a=b
b=temp
print (a,b)




