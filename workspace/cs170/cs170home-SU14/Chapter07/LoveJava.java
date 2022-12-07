import java.util.Scanner;
/**
 * A CS 170 Example.
 *
 * @author (your name goes here)
 * @version (today's date goes here)
 */
public class LoveJava
{
    /**
     * Print I love Java Programming n times.
     * Also, sum the numbers from 1 to n.
     * @param args the command line.
     */
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);

        System.out.print("Enter a positive integer: ");
        int n = cin.nextInt();

        String msg = "I love Java programming!";
        int sum = 0; // This will hold the sum of the numbers

        // You'll add your loop here




        // Here is the output
        System.out.println("Printed the message " + n + " times.");
        System.out.print("The sum of the numbers from 1 to " + n);
        System.out.println(" is " + sum);
    }
}
