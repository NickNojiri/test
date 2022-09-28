import java.util.Scanner;

/**
 *  StringReverse.java: Reverse a string using a for loop.
 *  An exercise for CS 170.
 *
 * @author (your name goes here)
 * @version (put today's date here)
 */

public class StringReverse
{
    /**
     * Ask the user to input a sentence, then reverse it.
     * @param args the command line.
     */
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        // Prompt the user for input
        System.out.print("Type a sentence : ");
        String line = cin.nextLine();

        String reversed = "";

        // Use a for loop to reverse the string here
        // Start with the last character
        // Add it to the reversed string
        // Continue working until you get to the first

        System.out.printf("%s reversed is %n%s%n", line, reversed);
    }
}
