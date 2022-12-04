#Chris Tran
#018716189
#Lab Assignment 9
#3/8/2019



#gets an integer number from the user on how many tickets purchased for class A
numseats_a = int(input("The number of tickets purchased for Class A? :")) 
#gets an integer number from the user on how many tickets purchased for class B
numseats_b = int(input("The number of tickets purchased for Class B :"))
#gets an integer number from the user on how many tickets purchased for class C
numseats_c = int(input("The number of tickets purchased for Class C? :"))

print("The number of seats purchased by Class A is:", numseats_a)
print("The number of seats purchased by Class B is:", numseats_b)
print("The number of seats purchased by Class C is:", numseats_c)
    
#number of tickets purchased for class A multiplied by $50
cost_A = numseats_a * 50
#number of tickets purchased for class B multiplied by $25
cost_B = numseats_b * 25
#number of tickets purchased for class C multiplied by $10
cost_C = numseats_c * 10
#total cost of Classes A B and C
cost_Total = cost_A + cost_B + cost_C
def main():
#creating main function to hold output
    print("The amount of dollars for Class A is:", cost_A) 
    print("The amount of dollars for Class B is:", cost_B)
    print("The amount of dollars for Class C is:", cost_C)
    print("The amount of dollars for Classes A,B, and C is:", cost_Total)
main()
