import acm.program.*;
/**
 *  Some short Relational examples with numeric values.
 *
 *  @author Stephen Gilbert
 *  @version Fall 2011
 */
public class RelationalExamples extends ConsoleProgram
{
    /**
     *  Create and display some boolean varaibles and values.
     */
    public void run()
    {
        setFont("monospaced-bold-18");

        // 1. Comparing different types
        float a = 2.34F;
        double b = 2.34;

        println("a == b is " + ( a == b));
        println("a > b is " + (a > b));
        println("a < b is " + (a < b));

        // 2. Comparing two mathematically equivalent values
        double c = .1 * 10.0;
        double d = .1 + .1 + .1 + .1 + .1 + .1+ .1+ .1+ .1+ .1;

        println("c == 1.0 is " + (c == 1.0));
        println("d == 1.0 is " + (d == 1.0));
        println("c == d is " + (c == d));

        // 3. Another example (from Cay Horstmann's Big Java, p. 196)
        double root = Math.sqrt(2);         // square root of 2
        double result = root * root - 2;    // subtract 2 from 2
        println("Subtracting 2 from 2 gives " + result);

        // 4. Using Math.round() to check if two numbers are equal
        print("Compare c and d to 6 decimals: ");
        double decimals = Math.pow(10, 6);
        println(Math.round(c * decimals) == Math.round(d * decimals));

        // 5. A check to see if numbers are "close enough"
        final double EPSILON = 10E-14;
        boolean isEqual = Math.abs(c - d) <= EPSILON;
        println("c and d 'isEqual' ? " + isEqual);
        println("result is effectively 0 ? " +
                           (result <= EPSILON));

        // 6. Large numbers and comparisons
        double big = 3.25E50;       // Move fifty places to the right
        double bigger = big + 1E6;  // Add a million
        double smaller = big - 1E6; // Subtract a million

        println("big == bigger? " + (big == bigger));
        println("big == smaller? " + (big == smaller));
        println("bigger == smaller? " + (bigger == smaller));
    }
}
