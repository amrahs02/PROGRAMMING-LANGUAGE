def compute_sum(number):
 
    total = 0
    
    # iterate loop from 1 to number
    for i in range(1, number+1):
        total = total + i
    
    return total
        
total = compute_sum(10)
print(total)   # Output: 55
 
total = compute_sum(100)
print(total)   # Output: 5050

