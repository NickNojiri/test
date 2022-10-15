import java.util.Random;
import java.util.Scanner;

//import java.util.Scanner;
public class Deck{
   private Card [ ] storage;
   private int top;

   public Deck(){
       char [] suits = {'H','D','S','C'};
       char [] rank = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
       storage = new Card[52];
       top=0;

       int count = 0;
       Card C1;
       for (char s: suits)

           for (char r : rank)
           {
               C1 = new Card(r,s);
               storage[count++]= C1;
           }
   }
   public void display()
   {
       int i= 0 ;
       for (int c = 0 ; c < 4 ; c++)
           for(int j = 0; j <13; j++)
               System.out.print(storage[c].getRank()+"" + storage[j].getSuit()+" ");

   }
   public void shuffle() {
       Random rand = new Random();
       int in;
       for (int i = 0; i < 100; i++) {
           in = i + rand.nextInt(52 - i);

           if (in != i) {
               Card temp = storage[i];

               storage[i] = storage[in];

               storage[in] = temp;
           }

       }
   }
   public Card deal(){


       return storage[top++];
   }


   public int cardsLeft() {
       return (52-top);
   }

   static boolean isPrime(int num){// this form of optomization was taught by Neil T :)
       if(num > 2 && num %2 ==0 )
           return false;
       int square = (int)Math.sqrt(num)+ 1;//takes the sqrt of the number bc we only have to check those numbers if we did a sort it would be even more optomized
       for(int i = 3; i < square; i+=2 )   //skips evens like 4 bc we told the computer to take out all the twos already
           if (num%i ==0)
               return false;


       return true;
   }
   public static void main(String[]args){
       Scanner in = new Scanner(System.in);
       if (c == 1)
       {}
       elseif (c == 1)
   }

}


