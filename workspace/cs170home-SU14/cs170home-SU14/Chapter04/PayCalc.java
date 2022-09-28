import java.util.Scanner;
import static java.lang.System.out;
import static java.lang.Math.*;

/**
 *  Calculates monthly payments and future value on a loan.
 *
 *  @author Stephen Gilbert
 *  @version Summer 2014
 */
public class PayCalc
{
    /**
     *  Calculate monthly payments on a loan.
     */
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);

        out.println("Payment Calculator");
        out.println("=============================================\n");

        out.print("Loan Amount (like $ 1,200.00): ");
        String loanStr = cin.nextLine();

        out.print("Annual % Rate (like 7.5%): ");
        String aprStr = cin.nextLine();

        out.print("Loan term (in years): ");
        String yearStr = cin.nextLine();

        // Placeholders
        double payment = 0;
        double terms = 0;

        out.println("Monthly payments: $ " + payment);
        out.println("Total repayed: $ " + (payment * terms));
    }
}
