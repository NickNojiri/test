import java.util.*;
import static java.lang.System.out;

/**
 *  Calculates simple interest.
 *
 *  @author Stephen Gilbert
 *  @version Summer 2014
 */
public class SimpleInterest
{
    /**
     *  Calculate 20% interest + principle for 1 year.
     *  @param args the command line.
     */
    public static void main(String[] args)
    {
        out.printf("One year from today, you'll pay me $ %,.2f%n",
            1000.0 * 1.2);  // 20% simple interest for 1 year

    }
}
