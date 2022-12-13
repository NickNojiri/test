import java.util.*;
import java.io.*;
/**
 * CS 170 Example exercise.
 * Process a file and report on the frequency of each letter.
 * 
 * @author (your name here)
 * @version Fall 2012
 */

public class LetterFrequency
{
    public static void main(String[] args) throws IOException
    {
        // Output file
        PrintWriter out = new PrintWriter("moby-stats.txt");
        out.println("Letter frequency analysis found in Moby Dick.");
        
        // Input file
        File in = new File("moby.txt");
        Scanner fin = new Scanner(in);

        // 1. Create an array to hold the frequency of the 26 letters
        
        while (fin.hasNext())
        {
            char[] line = fin.nextLine().toCharArray();
            
            // 2. Write a loop that processes each letter in the line
            //    If a character is a letter, then convert it to lowercase
            //    and increment its index in the array.
            
        }
        
        
        out.println("The frequency of each letter is:");
        // 3. Print the frequency of each letter here

        
        out.close();
    }
}