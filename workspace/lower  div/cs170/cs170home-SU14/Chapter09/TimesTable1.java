import static java.lang.System.out;
import java.util.*;

/**
 * Uses nested loops to print a times table.
 * 
 * @author Stephen Gilbert
 * @version Fall 2012
 */
public class TimesTable1
{
    /**
     * Print a 10 x 10 times table.
     * @parm args the command-line arguments
     */
    public static void main(String[] args)
    {
        out.println();
        out.println("A Times Table");
        out.println("==================================================");

        for (int outer = 1; outer <= 10; outer++)
        {
            for (int inner = 1; inner <= 10; inner++)
            {
                int product = inner * outer;
                out.printf("%5d", product);
            }
            out.println();
        }
   }
}
