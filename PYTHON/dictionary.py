#dict is nothing but key value pairs
dict={}
print (type(dict))
tp=()
print (type(tp))
list=[]
print (type(list))
#dict
d2= {"Sandeep": "Burger", "Shyam": "Fish", " Skillf":  "Roti"}
print (d2)
#adding items in dict
d2["Ankit"] = " Junk Food"#added ankit junk food in dict
print (d2)
#deleting items from dict
del d2["Ankit"]
print (d2)
#dict under dict
d2={"Sandeep":"Burger","Skillf":"Roti", "Shubham":"Maggie","Raj Vikramaditya":{"A":"Bread","B":"Tea"}}
d3 =d2#here d3 is refer to d2 So, if you remove anything from d2 is affect the d3 also 

#gettign value of key value
print (d2. get ("Harry"))
d2.update("Angelina":"Chawmean")#it update the dict with new key value pairs
print (d2)
print (d2.items)
print (d2.keys)
