from typing import Concatenate


print ("Hello World")
a=5*6
print (a)
#comment 
"""comment"""
print ("Sandeep",end=" ")#no new line
print ("Sharma")#auto new line
print ("new line")
print ("c:\n Harry")
print ("Sandeep \n Sharma")
#variable
var1="Hello World"
var2=4
var3=46.8
var4= "45"#int as string 
var5= "38"#int as string 
print (var1)
print (var2)
#check type
print (type(var1))
#Concatenate
#print (var1+var3)#cannot add because of diff type
print (var2+var3)#can add int + float
print (var1+var4)#here both are string
#typecasting
print (int (var4)+int (var5))
#print more than one time
print (10*"Hello world\n")
print (10 *(int (var4)+int (var5)))#if we multiply 10 by this statement then the no itself is multyply by 10
print (10*str(int (var4)+int (var5))) #Now it can print 100 times
#taking input
a=input()
b=input()
#wrong
print (a+b)#sum
print(int (a)+int (b))