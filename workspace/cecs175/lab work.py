
def user_choices():
    class_a =50
    class_b = 25
    class_c =10
    tickets = int(input("1.What would you like to choose \n 1.class a:$50 2class b:25\n 3class c:10"))
    while (tickets >3 and tickets <0):
        tickets = int (input ("1.What would you like to choose\n 1.class a:$50\n 2class b:25\n 3class c:$ 10\n" ))
        if (tickets == 1 ):
            choic3= 0
            if ticket == 1 :
                choice = "class a"
                return choice
    
            elif ticket ==2 :
                choice = "class b"
                return choice
    
            elif ticket ==3 :
                choice = "class c"
                return choice
           
       
                


def main():
      print (user_choices())
main()
    
