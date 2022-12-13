import acm.program.*;
/**
 * A CS 170 Example.
 * Divide two integers by repeatedly subtracting.
 *
 * @author (you are??)
 * @version (the date is ??)
 */
public class DivSimple extends ConsoleProgram
{
    /**
     * Divide two numbers by subtraction.
     */
    public void run()
    {
        // Your job is to:
        //   1. Allow the user to keep entering numbers
        //   2. Replace the calculation that calculates
        //      result by using subtraction and a loop.
        int dividend = readInt("Enter the dividend: ");
        int divisor = readInt("Enter the divisor: ");

        int result = dividend / divisor;

        println(dividend + "/" + divisor + " = " + result);
    }
}
