import java.util.Random;
import java.util.Scanner;

//import java.util.Scanner;
public class Deck {
    private Card[] storage;
    private int top;

    public Deck() {
        char[] suits = {'H', 'D', 'S', 'C'};
        char[] rank = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
        storage = new Card[52];
        top = 0;

        int count = 0;
        Card C1;
        for (int i = 0; i < 4; i++) {

            for (int j= 0; j < 13; j++) {
                C1 = new Card(suits[i], rank[j]);
                storage[count++] = C1;
            }
        }
    }

    public void display() {
        //Completely re writing your display since its hard to follow syntax
        /*This int is never used so i commented it out
        //int i = 0;
        //for (int c = 0; c < 4; c++) {
            //This increments I but I is never used, so its not needed here
          // i++;

            for (int j = 0; j < 13; j++) {
                System.out.print(storage[j].getRank() + "" + storage[c].getSuit() + " ");
            }

                System.out.println();
        }*/

        //Could write this for loop better, but running out of time hehe
        for(int i =0; i < 52 ; i++)
        {
            if(storage[i].getRank() == 'T')
            {
            System.out.print("10");
            System.out.print(storage[i].getSuit());
            System.out.print(" ");
            }
            else{
            System.out.print(storage[i].getRank());
            System.out.print(storage[i].getSuit());
            System.out.print(" ");
            }

            if((i==12) || (i==25) || (i==38))
            System.out.print("\n");
        }
    }

    public void shuffle() {
       /* Random rand = new Random();
        int in;
        for (int i = 0; i < 52; i++) {
            in = i+ rand.nextInt(52-i);

            if (in != i) {
                Card temp = storage[i];

                storage[i] = storage[in];

                storage[in] = temp;
            }

        }
        */

        Random rand = new Random():
        Card temp;

        for(int i = 0; i < 52; i++)
        {
            int x = rand.nextInt(52);
            int y = rand.nextInt(52);
            temp = storage[x];
            storage[x] = storage[y];
            storage[y] = temp;
        }
    }

    public Card deal() {


        return storage[top++];
    }


    public int cardsLeft() {
        return (52 - top);
    }

    public boolean isPrime(int num) {// this form of optomization was taught by Neil T :)
        if (num > 2 && num % 2 == 0)
            return false;
        int square = (int) Math.sqrt(num) + 1;//takes the sqrt of the number bc we only have to check those numbers if we did a sort it would be even more optomized
        for (int i = 3; i < square; i += 2)   //skips evens like 4 bc we told the computer to take out all the twos already
            if (num % i == 0)
                return false;


        return true;
    }
