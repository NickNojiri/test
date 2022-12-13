#userinput
pay = float(input("enter pay "))
#defined varable
test_one   = (pay *.1000)
test_two   = (952.5+(pay-9525)*.1200)
test_three =(4453.50+((pay-(38701))*.2200))
test_four  = 14,089.50+(pay-82501)*.24
testfive   = 32089.50 +  (pay -157500)*.32
test_six   = 45689.50 +  (pay -200000*.35)
testseven  = (150689.50 +((pay-500000)*.37))
test_eight = (3_665_689.5)+  ((pay-10_000_000)*.70)
if (pay <= 9545.000):
    #tax_rate= pay-test_one
    print("{0:.2f}".format( test_one),"{0:.2f}".format((test_one/pay)*100 ,"%"))
   
#tax brackets    
elif (pay > 9545 and pay <= 38700):
      
    print("the tax liablity $ {0:.2f}".format(test_two), "{0:.2f}".format((test_two/pay)*100),"%")
    
elif (pay > 38700 and pay <= 82501) :
     
    print("the tax liablity $ {0:.2f}".format(test_three), "{0:.2f}".format((test_three/pay)*100),"%")

elif (pay > 82501 and pay <= 157500) :
     
   print("the taxliablity $ {0:.2f}".format(test_four ),"{0:.2f}".format( (test_four /pay)*100 ))
    
elif (pay > 157500 and pay <=200,000 ) :
     
    print("the tax liablity $ {0:.2f}".format(testfive), "{0:.2f}".format((testfive /pay)*100),"%")
elif (pay > 200,000 and pay <= 500000) :
     
    print("the tax liablity $ {0:.2f}".format(test_six),"{0:.2f}".format( (test_six /pay )*100),"%")
elif (pay > 500000 and pay <= 10000000) :
     
    print("the taxliablity $ {0:.2f}".format(testseven), "tax percent{0:.2f}".format((testseven/pay)*100),"%")
#last bracet was a if because elif gave error    
if (pay > 10_000_000 ) :
    print("the tax liablity $ {0:.2f}".format(test_eight), "tax percent{0:.2f}".format((test_eight/pay)*100),"%")
    
"""avg not taxable salary is 100,614
about 1 percent
and out of 84 people I think that one person might be able to make that much"""
    





    
    


