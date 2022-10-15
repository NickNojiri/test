import acm.program.*;
import acm.io.*;
import java.util.*;

/**
 *  CharArrays.java.
 *  CS 170 Exercise
 *  Converting a String to a char Array
 *
 *  @author (Your name here)
 *  @version (The date here)
 */
public class CharArrays extends ConsoleProgram
{
    
    /**
     *  Adds items to a partially filled array.
     */
    public void run()
    {
        setFont("Consolas-bold-18");
        
        do {
            String inStr = readLine("Enter a String: ");
            
            // 1. Use a loop to convert it to a char array
            // 2. Use a loop to swap the last element of the array with the
            //    first until the entire array has been reversed.
            // 3. Print the char array
            
        } while (readLine("Another (y/n)? ").equalsIgnoreCase("n"));
        println();
        print("--done");
    }
}
