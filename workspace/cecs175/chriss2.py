import random

def ran_num():
    ran =random.randint(1,51)
    return ran


def the_game():
    print("enter -1 to quit")
    count = 0
    user_g = 0
    while user_g != -1:
        number = ran_num()
        
        while user_g != -1:
            user_g =int(input("enter a numeber 1- 50"))
            if user_g < number:
                print("too low")
                count+= 1
        
            elif user_g >number:
                print("too high")
                count+= 1
                
            else:
                print (number,"is correct took :",count,"trys")
                
                break
            
    print("thanks for playing")
the_game()


        
    


