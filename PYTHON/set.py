from difflib import diff_bytes


s=set ()
#print (type(s))
#its easy to make set using list
#set_from_list=set([2,3,5,6,7])
#print(set_from_list)
#print(type(set_from_list))
#set retain the unique values
s.add(1)
s.add(2)
s.add(1)
print(s)
s1=s.union({1,2,3,4,5,})
s2=s.intersection({1,2,7,6,7,9,0,4,5,})
print (s,s1)
print (s,s2)
print(len(s))
print(min(s))
print(max(s))
print(type(s))
#diff
#disjoint
print(s.isdisjoint(s1))