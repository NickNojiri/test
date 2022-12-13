
#Male weight print(“please enter weight”)
weight= eval(input())
print("please enter height")
height= eval(input())
print("please enter age")
age= eval(input())
gender= str(input("enter gender"))
bmrF = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age )
bmr = 66 + (6.3 * weight) + (12.9*height) - (6.8*age)
if gender=="male ":
    print("you must eatzM",bmr,"to maintain your weight")
else :
   
    print("you must eat",bmr1,"to maintain your weight")

