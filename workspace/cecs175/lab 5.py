 ###start of lab5 By nicholas nojiri 02/27/19
#use of functions
def get_mag(number_of_mag):#START of func get_mag
    #objective to get mags
     
    print("For earthquake", number_of_mag)
    mag = float(input("please input the mag "))
    
    while mag <= 0  :
        
        mag= float(input("please input a possitive number "))
        
    return mag #returrns num : nums is equal to the mag should have named nums mag
           #END of get_mag()      

def get_num_again():
    #obj; try again?
    
    try_again = float(input("to run again enter 1"))
    if try_again == 1:
        return True
    else:
        return False
        
        
    #END of get_num_again()
    #no value to return

def compare_mag(mag1,mag2):
    #obj: find out how much stronger mag 1 is than mag 2
    
    mag_power = 1.5*(mag1-mag2)#the power base is raised to
    base = 10

    
    mag_multi = base**mag_power #mag_multi determines the greater strength
    return mag_multi
    #return is mag_multi
    #End of functon compare_mag()
    
def mag_v_mag(quake_1,quake_2):
    #obj: make mag 1 larger than mag 2
    #not required
    if quake_1<quake_2:
        
        max_val= quake_2
        min_val= quake_1
        
        return max_val, min_val
    #returns lager of 2 vals
        
        
    elif quake_2<quake_1:
        
        max_val= quake_1
        
        min_val= quake_2
        return max_val, min_val #return can return more than one value in a list respectivly
    #returns larger of 2 vals
    else:
        print("they are the same strength program will run again")
        #funtions don't print these are rules for the program to follow when function is indeterminated
        return True
        #NOTE: dose not break a function if you call another function even if you have returned in previose indents
        #back up funtion
        #END of mag_v_mag
    
    
def main():
    #start of func main()
    while True:
        
        mag_1 = get_mag(1)
        mag_2 = get_mag(2)

        #after find mags time for calculations

        (mag_1,mag_2) = mag_v_mag(mag_1,mag_2)
        #run mag_v_mag to find top value so that it is cohearant in the code
    
        print("A earth quake of magnitude of" , mag_1 , "is", "{0:,.1f}".format(compare_mag(mag_1,mag_2)),"times stronger than a earthquake magnitude ", mag_2)
    

 # was a check to see if program was working right. print(mag_1,mag_2)
        run = get_num_again()#End of function main()
        if not run:
            break #kills the code


main()

###end of lab5
