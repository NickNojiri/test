import static java.lang.System.out;
import java.util.*;

/**
 * Uses nested loops to print a times table.
 * 
 * @author Stephen Gilbert
 * @version Fall 2012
 */
public class TimesTable
{
    /**
     * Print a 10 x 10 times table.
     * @parm args the command-line arguments
     */
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
      
        out.print("Enter upper limit for this times table: ");
        int limit = cin.nextInt();
        
        out.println();
        out.println("A Times Table from 1 to " + limit);
        out.println();

        // Header -------------------------------
        out.print("     ");  // 5 spaces for row label
        for (int n = 1; n <= limit; n++) out.printf("%4d|", n);
        out.println();

        out.print("-----");  // 5 hyphens for each number
        for (int n = 1; n <= limit; n++) out.print("-----"); 
        out.println();

        for (int outer = 1; outer <= limit; outer++)
        {
            out.printf("%3d|", outer); // row label
            for (int inner = 1; inner <= outer; inner++)
            {
                int product = inner * outer;
                out.printf("%5d", product);
            }
            out.println();
        }
   }
}
