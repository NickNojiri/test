import java.util.Scanner;
import static java.lang.System.out;
/**
 *  Calculates wages using an if statement.
 *
 *  @author Stephen Gilbert
 *  @version Summer 2014
 */
public class WageCalculator
{
    /** LIMIT for straight-time pay rate. */
    public static final int LIMIT = 40;

    /** Rate percentage for overtime. */
    public static final double OVERTIME_RATE = 1.5;

    /**
     *  Calculate wages using independent if statements.
     *  @param args the command line.
     */
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);

        out.println("Wage Calculator");
        out.println("----------------------------");

        out.print("Hours worked this week: ");
        double hours = cin.nextDouble();
        out.print("Hourly rate of pay: ");
        double rate = cin.nextDouble();

        double grossPay = 0;

        // Use if statements to calculate gross pay


        // Print the result
        out.printf("Gross pay: $ %,.2f%n", grossPay);

    }
}
