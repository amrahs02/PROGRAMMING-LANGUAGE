#user defined functions
def function1 ():
    print("Hello ")

#builtinfunction
# a=4
# b=3
# c = sum((a,b))
# print(c)

def function2 (a,b):
    """ This is the function which will calculate the average of two numbers
    This is not useful for theee numbers
    """

    average =(a+b)/2
    return average

v=function2(45,4)
print (v)
print (function2.__doc__)