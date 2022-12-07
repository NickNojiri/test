import static java.lang.System.out;
import java.util.*;

/**
 * Uses nested loops to print a times table.
 * 
 * @author Stephen Gilbert
 * @version Fall 2012
 */
public class TimesTable2
{
    /**
     * Print a times table.
     * @parm args the command-line arguments
     */
    public static void main(String[] args)
    {
        out.println();
        out.println("A Times Table");
        out.println();

        int limit = 10;
        
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
            for (int inner = 1; inner <= limit; inner++)
            {
                int product = inner * outer;
                out.printf("%5d", product);
            }
            out.println();
        }
   }
}
