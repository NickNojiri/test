#lab7

#
def get_interstate_number():
    highway_num = 0
    
    while highway_num < 1 or highway_num > 999:
        phrase = str(input("enter a highway \n"))
        phrase = phrase.lower()
        if  phrase.startswith('i') == True:
            is_space = phrase.find(" ")
            is_dash = phrase.find("-")
            if is_space == -1 and is_dash ==-1:
                highway_num = int(phrase[1:])
            elif is_space > 0:
                highway_num = int(phrase[is_space:])
            elif is_dash > 0:
                highway_num = int( phrase[is_dash+1:])
        elif phrase.startswith('i')== False:
            highway_num = int(phrase)
        if highway_num <0 or highway_num > 999:
            continue
    return highway_num

                              
                
        
def is_primary(number):
    if number > 100:
        return False
    return True

def compass_orientaion(number):
    #only primary
    
    
    if number%2 == 0:
        return "east west"
        
    return "north south"
        

def is_arterial(number):
    #primary
    
    if number % 5 == 0:
        return True
    else:
        return False

def auxiliary_type(number):
    
    first_num = number//100
    if first_num % 2 == 0:
        return "radial"
    else:
        return "spur" 
        
    


def parent_highway(number):
    # on axu interstate 
    first_num = number %100
    return first_num

def main():
    freeway_num = get_interstate_number()
    freeway = is_primary(freeway_num)
    
    if freeway != False:
                                    
        freeway_distance = is_arterial(freeway_num)
        if freeway_distance==True:
            distance="long-distance"
        
        else:
            distance =""
                
        freeway_parent = compass_orientaion(freeway_num)
        print("interstate", freeway_num,distance,"is oriented",freeway_parent)
        
    else:
        freeway_type = auxiliary_type(freeway_num)
        print(freeway_type)
        freeway_parent = parent_highway(freeway_num)
    
        print("interstate", freeway_num, "is a",freeway_type,"of Interstate",freeway_parent)

    
    
    

    
main()

#predident Eisenhower
#405
#washtington

    
