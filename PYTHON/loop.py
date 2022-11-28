# list1= ["Sandeep","satyam","saurabh","prashant"]
# for item in list1:
#     print (item)

# #list in list
# list2 =[["Sandeep",1],["Satyam",2],["Saurabh",3],["Prashant",4]]
# for item in list2:
#     print(item)
# #also
# #🤔
# list2 =[["Sandeep",1],["Satyam",2],["Saurabh",3],["Prashant",4]]
# for item ,lollypop in list2:
#     print(item,lollypop)
# #make dictionery using list
# dict1= dict(list2)
# for item in  dict1.items():
#     print (item)

list4 = [3,6,3,7,3,8,3,8,45,75,6334,675,4456,4,7,755]
for item in list4:
    if item.isnumeric() and item>=7:
        print(item)