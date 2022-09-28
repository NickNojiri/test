import acm.program.*;
import acm.util.*; // random generator
/**
 *  A program guessing game.
 *
 *  @author (your name goes here)
 *  @version Summer 2014
 */
public class GuessOMatic extends ConsoleProgram
{
    private RandomGenerator gen = RandomGenerator.getInstance();

    /**
     *  Guess a random number between 1 and 100.
     */
    public void run()
    {
        double payout = 2.0;
        int tries = 0;
        boolean done = false;
        int theNumber = gen.nextInt(1, 101);

        while (! done)
        {
            print(String.format("Payout is $%.2f. ", payout));
            int theGuess = readInt("Your guess? ");
            tries++;
            
            if (theGuess == theNumber)
            {
                 done = true;
            }
            else
            {
                payout -= .25;   // grab our "taste"
                if (theGuess < theNumber)
                    print(String.format("%d is too low.%n", theGuess));
                else
                    print(String.format("%d is too high.%n", theGuess));
            }
        }
        
        print("You guessed the the number ("); 
        println(theNumber + ") in " + tries + " tries.");            
        print("Your $1.00 has payed back ");
        println(String.format("$%.2f", payout));
    }
    
    /**
     * Print the welcome at the top of the screen.
     */
    public void init()
    {
        setFont("Comic Sans MS-bold-18");
        println("The CS170 GuessOMatic");
        println("----------------------------------------------------");
        println("The GuessOMatic will think of a number from 1 to 100.");
        println("Each game costs $1 to play.");
        println("Each missed guess costs you .25");
        println("You can't lose more than you invest.");
        println("-----------------------------------------------------");
    }
}
