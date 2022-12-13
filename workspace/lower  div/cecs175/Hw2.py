import EnglishDictionary
"""
def print_menu():#prints the main menu to the screen. 1
    
    
    #(a) Function behavior:
        #i. Prints a menu with three options: Check a palindrome; Check a crossword square; and Quit.
    #(b) Restrictions:
    #   1 i. Do not use input to read a menu choice from the user.
#   start:
    return print("1. Check a palindrome; \n2.Check a crossword square:\n3. nand Quit.")


# end of menu


def get_menu_choice(): #    2    
    #(a) Function behavior:
    #   i. Read the user's selected menu option using input(), and validate it1 .
    #   ii. The validated selected option is returned.
    #(b) Restrictions:
    #   i. No other functions are called from get_menu_choice.
    user_choice = int(input(""))
          
    while (user_choice < 0 or user_choice > 3 ):
   
        user_choice = int(input(""))
        #   enters validation loop values 1-3
    return user_choice

#END OF GET_MENU_CHOICE()

                      
def get_phrase(): #    3
    
    
    #(a) Function behavior:
    #   i. Ask the user to input an English phrase as a string.
    #    ii. Validate that at least one character is entered.
    #    iii. Return the validated phrase.
    #(b) Restrictions:
    #    i. No other functions are called from get_phrase.
          
        
    user_phrase = ""
    while user_phrase == "":
        user_phrase = str(input("please enter an english phrase"))
    return user_phrase

   
        
#END OF GET_PHRASE()
          

          
    
def is_palindrome(phrase): # done and checked "No "x" in nixon" 4

    
    #given a string named phrase, this function returns True if the string is a palindrome, and False otherwise.
    #(a) Function behavior:
    #   i. Given phrase, you must determine if the string is identical forwards and backwards, if we ignore
    #   upper/lowercase and any non-letter characters like spaces and punctuation.
    
    #   ii. Adapt the loop from lecture, which assumes that the entered string is lower-case and does not contain non-letter characters.
    
    #   iii. In each iteration of the loop you are adapting, you will need to write two more loops. The rst loop should increment
    #   i as long as index i in phrase is not a letter; we can determine if a single character is a letter by taking that letter and calling
    #   .isalpha() on it, which will be True only if the character is a letter.
    #   iv. The second loop should decrement (decrease) j as long as index j in phrase is not a letter.
    #   v. Once the two loops have nished, you know that index
    
    #   i is a letter and index j is a letter. You can now compare them and perhaps make a decision, or perhaps not.
    #   vi. Once you are sure the string is not a palindrome, you should return False.Once you are sure the string is a palindrome, return True.
    #   (b) Restrictions: i. You cannot print or call input from this function.
    #   i. You cannot use any function that removes or replaces characters
    #   from a string. We haven't learned these yet; do not use solutions from your friends or the Web, because they probably break this rule.
    #   iii. You cannot remove or replace characters from
    #   the phrase by hand, without using a function.
    #   iv. You cannot use any function that reverses a string for you, including using [::-1] like you might nd on the Internet.
    #   v. You cannot reverse the string without using a function.
    #   vi. In general, you can only make one pass through the string. This means that once you examine a particular character in the string, you can never examine that character again.
    #   All
    #   the restrictions above would violate this rule if ignored. Example: if we wrote a loop to go through the phrase and remove any non-letter character, and then go through the modied phrase
    #   to see if it is a palindrome, we would be making two passes through the string... so we can't do that. 1From now on, validate always implies a loop that repeatedly asks for input
    #   until the
    #   e input is valid.2
    #   vii. You should not assume that phrase is all lowercase. You can use the .lower() function to create a copy of phrase that is converted to all lowercase

    lower_phrase = phrase.lower()
    start_of_phrase = 0
    end_of_phrase = len(lower_phrase)-1
#CONSTANT LIST
    

    while start_of_phrase < end_of_phrase :
#   will check if the indexes are infact letters to compeare
        print(start_of_phrase, end_of_phrase)
        
        if not lower_phrase[start_of_phrase].isalpha():
            start_of_phrase += 1
#       incres 1
#(End of IF)
            
#       print("I is not a letter",start_of_phrase)#check for letter in the I value
            
        elif not lower_phrase[end_of_phrase].isalpha():
            end_of_phrase -= 1 #dec 1
#END OF ELIF
            
#       print(end_of_phrase,"j is not letter")# check for letter in j val
        else:
             if lower_phrase[start_of_phrase] !=  lower_phrase[end_of_phrase] :

#          if it not equal return false
                return False
#END OF IF                
             start_of_phrase += 1
             end_of_phrase -= 1
#END OF ELSE && LOOP

            
#   print('end')  #if this prints that means it made it out of the loop
    return True
#END OF IS_PALINDROME()


def menu_check_palindrome(): #   5
    phrase = get_phrase()
    palin_check = is_palindrome(phrase)
    if palin_check == False:
        print(phrase,"is not a palindrome")
    else:
        print(phrase,"Is a palindrome")
#   this function implements Menu Option 1, check a phrase to 
#   see if it is a palindrome.
#   (a)
#   Function behavior: i. Call get_phrase to read the user's selected 
#   phrase. ii. Call is_palindrome with the phrase you saved from get_phrase, and save the 
#   resulting Boolean value. iii. Use the Boolean value from is_palindrome to print either: A. X is a 
#   palindome!; or B. X is not a palindrome where X is the phrase entered by the user.
#   (b) 
#   Restrictions: i. Do not use input in this function. ii. Do not perform any of the logic to detect a 
#   palindrome in this function. iii. Do not convert the phrase to lowercase or remove any characters
#   from it. iv. When you print the nal response message, the X  must appear exactly as the user 
#   entered it.
    


def get_crossword_square():#   6
    for i in range(0,len(s)):
        s[::n]
    for i in range(n):
        s[::n]
    
    
#   asks the user to input the words of a word square, one per line. 
#   (a) Function behavior: i. Ask the user to input the rst line of a crossword square. From this input,
#   you can calculate the order of the square, which is equal to the length of the rst line of the 
#   square. ii. Then repeatedly ask the user to input the next line(s) of the word square. You must
#   repeat this until you have read in a total number of lines equal to the order of the square. iii. 
#   Each line of the square should be concatenated into a single string variable. For example, the
#   order-4 square from the assignment's introduction would be concatenated into the string 
#   NASAOUTSORESNAME. iv. See the Example Output to understand how this function behaves.
#   v. Return the concatenated string. (b) Restrictions: i. You cannot use lists or dictionaries in this 
#   function. (We haven't covered these yet.) ii. No other functions are called from 
#   get_word_square. iii. Do not assume the order of the square; you must allow squares of any
#   size to be entered.

def check_crossword_square(square): #   7

#   given a concatenated string representing a potential 
#   crossword square, this function determines if the string actually is a crossword square.
#   (a) 
#   Function behavior: i. Determine the order of the square based on the length of the concatenated
#   string. For example, note that our order-4 example square was concatenated into a string of 
#   length 16. What length would we get from an order-3 square? ii. Suppose that the order of the
#   square is N. We must identify the horizontal strings of the square by slicing strings of length N
#    and see if those strings are words using the EnglishDictionary module. iii. We must then 
#   identify the vertical strings of the square also using slices, and see if those are words. Look at
#   the concatentated example string NASAOUTSORESNAME, and gure out where the indices of
#   the rst veritcal word (NOON) land in the string. You'll note a pattern: starting at index 0, we skip
#   _______ positions to get to the next letter of the word. iv. You will return True if and only if the 
#   given square is a word square, and False otherwise. 3
#   (b)
#   Restrictions: i. You cannot print or call
#   input from this function.



def menu_check_crossword_square(): #    8
    print("")

    
#   this function implements Menu Option 2, Check a 
#   crossword square.
#   (a) Function behavior:
#   i. Call get_crossword_square to read the user's 
#   (potential) crossword square string. ii. Call is_crossword_square with the string you saved from
#   the previous step, and save the resulting Boolean value. iii. Use the Boolean value from the 
#   previous step to print either: A. X is a crossword square!; or B. X is not a crossword square 
#   where X is the string entered by the user. Each word of the crosssquare must be printed on its
#   own line.
#   (b) Restrictions:
#   i. Same as menu_check_palindrome.


def main():
#START     
    print_menu()
    choice = get_menu_choice()
    while choice !=3:
        print_menu()
        if choice == 1  :
            
            menu_check_palindrome()

        elif choice == 2  :
            
            menu_check_crossword_square()
        else:
            choice=get_menu_choice()
#END OF MAIN()


#   implement the main of this program.
#   (a) Function behavior: i. Display the menu. ii. Read the user's menu choice. iii. Execute the 
#   function corresponding to the menu choice. iv. Repeat until option 3 (Quit) is selected  including
#   printing the menu on each loop. (b) Restrictions: i. main() cannot call main(), and neither can 
#   any of your other functions. Use a loop. ii. You cannot print or call input from this function.




main()
    
#end now
///  user_phrase = str(input("Please input an English phrase as a string"))
          check_front = "A"
          check_back = "z"
          #validation with assi code?
          while (user_phrase < check_front or user_phrase > check_back):
          
              user_phrase = str(input("Please input an English pharase as a string"))
          return user_phrase///
#   first atempt     
if user_choice == 1  :
    print("1. Check a palindrome")
    choice_1 == 1
    return choice_1
          
          
    if user_choice == 2  :
          print("2. Check a crossword square")
          choice_2 == 2
          return choice_2
          
    if user_choice == 3  :
          choice_3 == 3
          return choice_3  
          """