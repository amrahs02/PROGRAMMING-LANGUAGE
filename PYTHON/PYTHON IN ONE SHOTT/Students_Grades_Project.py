def get_average_score (scores):
    total=sum(scores)
    length=len(scores)
    average=total/length
    return average

def compute_grade(average_score):
    if average_score>=80 :
        grade= "A"
    elif average_score<80 and average_score >=60.0 :
        grade= "B"
    elif average_score <60 and average_score >=50.0:
        grade= "C"
    else :
        grade= "F"

    return grade


scores=[10,20,30,40,50]
average_score=get_average_score(scores)
grade = compute_grade(average_score)
print(average_score)
print('Grade:', grade)








#This sol is by app.programiz.pro

# Returns the average score of a student
def get_average_score(scores):
    
    # compute sum of scores
    total = sum(scores) 
 
    # get the number of subjects
    count = len(scores)
    
    # compute average score
    average_score = total / count
    
    return average_score
 
# Returns the grade based on the average score
def compute_grade(average_score):
    if average_score >= 80.0:
        grade = 'A'
    elif average_score >= 60.0:
        grade = 'B'
    elif average_score >= 50.0:
        grade = 'C'
    else:
        grade = 'F'
    
    return grade
 
 
student_scores = [55, 64, 75, 80, 65]
 
# get average score
average_score = get_average_score(student_scores)
 
# get grade
grade = compute_grade(average_score)
 
print('Average score is',  average_score)
print('Grade:', grade)