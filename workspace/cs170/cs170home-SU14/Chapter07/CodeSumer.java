import java.util.Scanner;
import static java.lang.System.out;

/**
 *  Illustrates use of the for loop.
 *
 *  @author Stephen Gilbert
 *  @version Summer 2014
 */
public class CodeSumer
{
    /**
     *  Sums the Unicode values of all the characters in a string.
     *  @param args the command line.
     */
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);

        out.print("Enter a line of text: ");
        String s = cin.nextLine();

        int nChars = s.length();
        int sumOfCodes = 0;

        for (int i = 0; i < nChars; ++i)
        {
            sumOfCodes += s.charAt(i);
        }

        out.println("The unicode sum is " + sumOfCodes);

    }
}
