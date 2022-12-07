import java.util.Scanner;
import static java.lang.System.out;

/**
 * Some String relationships.
 * @author Stephen Gilbert
 * @version Fall 2011
 */
public class StringRelations
{
    public static void main(String[] args)
    {
        // Input streams
        Scanner cin = new Scanner(System.in);

        // Part 1. Boolean variables and methods
        out.print("Enter a file name: ");
        String fileName = cin.nextLine();
        boolean isSourceCode = fileName.endsWith(".java");
        out.println(fileName + " ends with .java? " + isSourceCode);

        out.print("Continue (Yes or No)? ");
        String answer = cin.nextLine();
        boolean isDone = answer.equalsIgnoreCase("No");
        out.println(answer + " means you are done? " + isDone);

        // Part 2. Comparing Strings with equality operators.
        String a = "Hi Mom";
        String b = "Hi Mom";
        String c = b;

        out.println("a == b ? " + (a == b));
        out.println("a == c ? " + (a == c));
        out.println("b == c ? " + (b == c));
    }
}
