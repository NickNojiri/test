#chris homeowork
#must import random to use a random range
import random
count = 0
do_again = int(input("Hi welcome to dice roll to play eneter 0 \n"))

while do_again != 1: #start of while Loop

    number_of_rolls = int(input("enter numebr of rolls greater than 1"))
    if  number_of_rolls <= 1:
        print("thanks for playing")
        break
    
    for count in range(0,number_of_rolls+1):

    #count+=1
        dice_role = random.randint(2,12)
        print ("dice role #",count,dice_role*"*")


    
    do_again =  int(input("to quit enter 1, to play again enter 0 \n"))

    if do_again == 1:
        print("thanks for playing")
        break
    #end of code
    
