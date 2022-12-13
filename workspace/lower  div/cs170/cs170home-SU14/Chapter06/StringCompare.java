import java.util.Scanner;
import static java.lang.System.out;
/**
 * StringCompare.java - an exercise for CS 170
 * @author (put your name here)
 * @version (put the date here)
 */
public class StringCompare
{
    /**
     * Compare some String variables.
     */
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        
        // Read two lines of text. Store in String variables
        System.out.print("Enter a word or line of text: ");
        String aStr = cin.nextLine();
        System.out.print("Now enter another word or line of text: ");
        String bStr = cin.nextLine();
        
        // 1. Set isEqual to true if aStr equals bStr
        boolean isEqual = false;   // your code goes here
        System.out.println("aStr is equal to bStr? " + isEqual);
        
        // 2. Do the same thing again, but don't compare case
        System.out.println("aStr is equal to bStr (case-insensitve)? " + isEqual);
        
        
        // 3. Set isPrefix true if bStr begins with aStr
        boolean isPrefix = false; // your code goes here
        System.out.println("bStr begins with aStr? " + isPrefix);
        
       
        // 4. Set isSuffix true if bStr ends with aStr
        boolean isSuffix = false; // your code goes here
        System.out.println("bStr ends with aStr? " + isSuffix);
        
        // 5. Set isFirst true if aStr appears before bStr (case-sensitive)
        boolean isFirst = false; // your code goes here
        System.out.println("aStr appears before bStr (case-sensitive)? " + isFirst);
        
        // 6. Set isFirst true if aStr appears before bStr (non-case-sensitive)
        System.out.println("aStr appears before bStr (non-case-sensitive)? " + isFirst);
        
        
    }
}