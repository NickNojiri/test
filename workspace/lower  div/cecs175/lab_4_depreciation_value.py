##car depritiationvalue
depre= 0.18
years=1
#asks for input
total_cost=float(input("please input the cost"))
num_years=int(input("please input the number of years"))
#validation for values less than 0
while (total_cost<0):
    total_cost=float(input())
while (num_years< 0):
        num_years=int(input())
for years in range (0,num_years):
    #the depre per year is befor the changes to the asigned var total cost so that it is an a acurate value
    depre_per_year = total_cost*depre
    total_cost= total_cost-(total_cost*depre)
# years+1 is because it starts the index at zero so add one and it starts form 1
    print("year ",years+1 ,"cars value $","{0:,.2f}".format(total_cost), "depretiation value is -$","{0:,.2f}".format(depre_per_year))

#what if it is zero?? no depre val        
if ((num_years or total_cost)==0):
    print("the deprciation is 0 the car is worth $",total_cost)
    


#it dose not mater the number these are percdents after 4 years it will not be more than it orig val
    #100 @ zero 82%at 1 67.24% @ 2 55.136% year 3 45.2%
    #just like 50% off 100$ then take an additonal 50% isnt a 100% its 75%
