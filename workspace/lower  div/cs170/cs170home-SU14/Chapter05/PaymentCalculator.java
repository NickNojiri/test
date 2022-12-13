import java.util.*;
import static java.lang.System.out;  // use out.println()
import static java.lang.Math.*;      // use sqrt() instead of Math.sqrt()

/**
 *  Calculates monthly payments and future value on a loan.
 *
 *  @author Stephen Gilbert
 *  @version Summer 2014
 */
public class PaymentCalculator
{
    /**
     *  Calculate monthly payments on a loan.
     *  @param args the command line.
     */
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);

        out.println("Payment Calculator");
        out.println("=============================================\n");

        out.print("Loan Amount (like 1200.00): ");
        double loan = cin.nextDouble();

        out.print("Annual % Rate (like 7.5): ");
        double c = cin.nextDouble() / 1200;

        out.print("Loan term (in years): ");
        double n = cin.nextDouble() * 12;

        double payment = loan * ((c * pow(1 + c, n))/(pow(1 + c, n) - 1));

        out.printf("Monthly payments: $ %,.2f%n", payment);
        out.printf("Total repayed: $ %,.2f%n", payment * n);
    }
}
