menu = 0
#mainmenu
#var list
#v = speed of the ship in units of meters per second
#w = unit of speed measured from warp factor
#c = speed of light
#v =  w^(10/3)*c
speed_light = 299_792_458
warp_factor_constant = 10/3
seconds_to_years= 31_536_000
cost_space_x = 2720
cost_ula = 14_830
insurance_fee =.30
light_years=9460730472580800
days_in_years = 365
seconds_in_day=60*60*24
while (menu != 4):
   
#list of options and operations
    print(" 1. Warp Speed     A ")
    print(" 2. Cost to Lanch  B ")
    print(" 3. Time Dailation C ")
    print(" 4. Quit           D ")



#varables not in the range of the function

    while (menu <1 or menu >4):
        menu = int(input("number 1-4\n"))
    
#the operations
    if( menu == 1 ):
        warp_factor = 0
        print("Warp Speed")
        
        while ( warp_factor <= 0 ):
            warp_factor = float(input("please enter a non-negative interger"))
            
        #v is volocity
        volocity = warp_factor**(warp_factor_constant) *(speed_light)
        
        if (warp_factor >= 0):
            #{0:,.2f}will add commas
             print("speed is ", "{0:,.2f}".format(volocity))
         

        
    if( menu == 2 ):
        print("Cost to Lanch")
        weight_of_ship = 0
        cost= 0
        while(weight_of_ship <= 0):
            
            weight_of_ship = float(input("please enter the weight of the ship as a number greater than 0\n"))
            
        while(cost <= 0):
            
            cost = float(input("please enter the cost of the ship as a number greater than 0\n"))
                                                              
        space_x = (cost_space_x * weight_of_ship ) + (cost * insurance_fee) + cost
        ula = cost_ula*weight_of_ship

        if (space_x < ula):
            print("SpaceX costless at $", space_x,"\n Cost $",-(space_x-ula), "cheaper")
        
        elif(space_x >ula):
            print("United Launch Alliance costless at $", ula,"\n Cost $", ula-space_x, "cheaper")
        else:
             print("they are the same")
        

        
    if( menu == 3 ):
        print("Time Dailatiion")
        distance = 0
        ship_velocity = 0
        #valadation loop
        while(distance <= 0):
            distance = float(input("please total distance in light years:"))
            
        while(ship_velocity<=0 or ship_velocity>=1):
            ship_velocity = float(input("enter volovity as a fraction of speed of light years"))
       #conversions
        new_distance = distance*light_years
        
        new_speed = ship_velocity*speed_light
        
        time= new_distance/new_speed

        time_on_earth=time/seconds_in_day
        #dailation function
        dialation = ((1-((new_speed**2)/speed_light**2))**(1/2))*time_on_earth
        #stoic
        obs_days = time_on_earth%days_in_years
        obs_years  = time_on_earth // days_in_years
        passangers_years = dialation//seconds_to_years
        passangers_days =dialation%days_in_years
        #if x>356
        print ("time, for an obsever is, years:",int (obs_years),"days:",int (obs_days) )
        print("time for the passanger is years:",int (passangers_years),"days:",int(passangers_days))
        print("dailation:",dialation,time,"time",int (time_on_earth))
        
        
            
    menu = int(input("please input a menu option 1-4"))
        
    
                 
