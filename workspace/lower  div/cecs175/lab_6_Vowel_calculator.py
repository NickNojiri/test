#lab 6 vowel calculator
def get_word():#returns word(str)
    word = str(input("enter a lowercase word with no spaces or special char"))
    return word

def is_vowel(letter):#returns t/f
    if (letter != "a" and letter !="e" and letter !="i" and letter !="o" and letter !="u"):
        return False #returns false not true beacasue of the not operator this way is faster beacuse it checks only 5 either way works with or with out but this just returns the false val first
    return True


def calculate_measure(word):#returns a positive int
    #funtion compears char
    vowel_cos = 0
    for c in range(0,len(word)-1):
        
        
        letter_1= word[c]
        c2= c+1
    
        letter_2=word[c2]
        print( letter_1,letter_2)
        if(is_vowel(letter_1)== True and is_vowel(letter_2)==False):
            vowel_cos+=1
    return vowel_cos#End of calc
            
        
    
    
def main():

    user_word = get_word()
    print (calculate_measure(user_word))
main()
        
        
    
