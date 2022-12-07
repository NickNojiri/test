import java.util.Scanner;
import static java.lang.System.*;
/**
 *  Sums the digits in an integer input by the user.
 *
 *  @author Stephen Gilbert
 *  @version March 2010
 */
public class SumDigits2
{
    /**
     *  Calculates the sum of the digits in an integer
     */
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        
        out.println("SumDigits2: Sum the digits in an integer!");
        out.println("-----------------------------------------");
        out.print("Enter a number from 1 to " + Integer.MAX_VALUE + ": ");        
        
        int number = cin.nextInt();
        
        int original = number; // Save to report later
        
        int sum = 0;
        do
        {
            sum += number % 10;     // add right-most digit to sum
            number /= 10;           // then reduce number
        }
        while (number > 0);         // our limit-loop bounds
        
        out.printf("Sum of the digits in %,d is %,d%n",
                   original, sum);
    }
    
}
