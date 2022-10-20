name = str(input("please enter name:"))
#user Inputs
plate_App = int(input("plate apperances:"))

at_b = int(input("how many times at bat"))

w = int(input("#of walks"))   #1

s = int(input("#of singles"))  #1
d = int(input("#of doubles"))  #2
t = int(input("#of triples"))  #3
hr=  int(input("#of hr"))      #4

print("")
#end of userinp
hits= s+d+t+hr
print("total hits;",hits)
#formulas
avg_Hit =  ((hits )/(at_b) )    #avg amount of times ball is hit
slg     = ((s)+(d*2)+(t*3)+(hr*4))/at_b
obs     = (hits+w)/plate_App
ops     = obs+slg
#end of formulas
#print stats
print("The batting avr", "{0:.3f}".format(avg_Hit))

print("SLG", "{0:.3f}".format(slg))
print("OPS", "{0:.3f}".format(ops))

#1 All time high ops: Babe Ruth is the all-time leader with a career 1.1636 OPS.
#2 Current highest among active players: Mike trout from the angles at .9897
