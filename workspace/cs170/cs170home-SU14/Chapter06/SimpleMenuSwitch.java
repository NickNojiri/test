import static java.lang.System.out;
import java.util.Scanner;
/**
 *  A simple menu using a switch statement.
 *
 *  @author Stephen Gilbert
 *  @version Spring 2010
 */
public class SimpleMenuSwitch
{
    /**
     *  Asks the user for a menu selection.
     */
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        
        out.println("The CS 170 Commissary");
        out.println("---------------------");
        out.println("  1) Twinkies");
        out.println("  2) Tofu");
        out.println("---------------------");
        
        out.print("  Your choice >>> ");
        int choice = cin.nextInt();
        
        out.println();
        
        // The switch statement
        switch (choice)
        {
            case 1:
                out.println("Here's your healthy Twinkies");
                break;
            case 2:
                out.println("Here's your tasty Tofu");
                break;
            default:
                out.println("What?? Do you see " 
                                + choice + " on the menu?");
        }

    }
}
