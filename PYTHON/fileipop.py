#file io basics
"""
"r" - open file for reading ?? default

"w" open a file for writing
"x" creates file if not exists
"a" add more content  to   file 
"t" text mode 
"b" binary mode
"+" read and write
""" 

f= open ("sandeep.txt")
content= f.read()
print(content)
f.close()

