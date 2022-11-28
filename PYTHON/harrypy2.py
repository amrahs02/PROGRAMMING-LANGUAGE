#string slicing and other functions
mystr="Sandeep Sharma"
print (mystr)
print (len(mystr))#length of string
print(mystr[0:15])
#print(mystr[0:49])#also
print (mystr[::])#also
print (mystr[::1])#also
print (mystr[::2])#also
print (mystr[0::])#0 is the starting point
print (mystr[:15:])#15 is the ending point
print (mystr[0::2])#2 is the skipping character
print (mystr[-6:-4])#is equal to print (mystr[9:11])
print (mystr[8:10])
print (mystr[8:10:-1])#-1 reverses the string 
#if we add -2 in the third place it first reverses the string and then skip one character
print (mystr.isalnum)
print (mystr.isalpha)
print (mystr.isdecimal)
print (mystr.isnumeric)
print (mystr.capitalize)
print (mystr.lower)
print (mystr.replace("Sharma","Kumar"))

#many more functions are in python search on google


