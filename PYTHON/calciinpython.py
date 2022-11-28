def add(x,y):
    return x+y
def sub(x,y):
    return x-y
def mul(x,y):
    return x*y
def div(x,y):
    return x/y

print ("1 for add\n")
print ("2 for sub\n")
print ("3 for mul\n")
print ("4 for div\n")
print ("Enter the choice\n")
choice =input("Eneter your choice\n")
num1=int (input("Enter the first number\n"))
num2 = int (input ("Enter the second number\n"))
if choice =='1':
    print(add(num1,num2))
elif choice =='2':
    print(sub(num1,num2))
elif choice =='3':
    print(mul(num1,num2))
elif choice =='4':
    print(div(num1,num2))
else:
    print("Wrong choice\n")
