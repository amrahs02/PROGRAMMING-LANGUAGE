#faulty calclulator by Sandeep Sharma
print("This is the faluty calculator")
print(" +, -, * ,/ ,// ,%")
print("You can find any of the above")
a=int (input("Enter your first number\n"))
b=int(input("Now , Enter your second number\n"))
opr=str(input("Enter the operator\n"))

if a==45 and b==3 and opr=="*":
  print ("555")
elif a == 56 and b==9 and opr=="+":
  print("77") 
elif a==56 and b==6  and opr =="/":
  print("4")
elif(opr=="+"):
  print(a+b)
elif (opr=="-"):
  print(a-b) 
elif(opr=="/"):
  print(a/b)
elif(opr=="*"):
  print (a*b)
elif(opr=="//"):
  print(a//b)