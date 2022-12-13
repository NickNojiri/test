import static java.lang.System.out;
import java.util.Scanner;
/**
 *  Calculates the count, average and
 *  sum of a sequence of positive integers.
 *  Uses break instead of a primed loop.
 *
 *  @author Stephen Gilbert
 *  @version Fall 2011
 */
public class PositiveMean2
{
    /**
     * Reads an indefinite series of positive integers.
     */
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);

        out.println("This program adds a list of integers.");
        out.println("Enter values, one per line.");
        out.println("End by entering a negative number.");
        out.println();

        // The preconditions
        int count = 0;
        int sum = 0;

        while (true)        // infinite loop bounds
        {
            // 1. Prompt and read the input
            out.print(" > ");
            int num = cin.nextInt();

            // 2. Check the intentional loop bounds
            if (num < 0) break;

            // 3. Process this iteration
            count++;            // increment counter
            sum += num;         // add to running total
        }

        // postcondition
        if (count > 0)
            out.printf("Count = %,d, Sum = %,d, Mean = %,.2f%n",
                count, sum, (double)sum / count);
        else
            out.println("No positive integers entered.");
    }
}
