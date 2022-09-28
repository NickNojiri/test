import java.util.*; // using Scanner
/**
 *  GetNums.java: Using try-catch.
 *  A CS 170 exercise.
 *
 *  @author Stephen Dean Gilbert
 *  @version Fall 2011
 */

public class GetNums
{
    /**
     * Using the try-catch handlers.
     */
    public void run()
    {
        Scanner cin = new Scanner(System.in);
        System.out.print("Please enter an integer: ");
        String answer = cin.next();
        int num = Integer.parseInt(answer);

        // EXERCISE: Use try-catch to make sure the number entered is valid.
        //  Continue trying until you get valid input.

        System.out.println("Your number is " + num);
    }

    /**
     *  Standard entry point.
     */
    public static void main(String[] args)
    {
        new GetNums().run();
    }
}
