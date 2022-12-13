import acm.program.*;
import acm.io.*;
import java.util.*;

/**
 *  InputSimpleArray.java.
 *  Adding items to a "partially filled" array.
 *  You'll modify this to use an array encapsulated into
 *  a simple class.
 *
 *  @author (your name goes here)
 *  @version (the date goes here)
 */
public class InputSimpleArray extends ConsoleProgram
{
    /** Set the size of the array here. */
    private static final int MAX_SIZE = 100;
    
    /**
     *  Adds items to a partially filled array.
     */
    public void run()
    {
        setFont("Consolas-bold-22");
        // Use a Scanner to read multiple numbers on one line
        Scanner scan = new Scanner(this.getReader());

        // 1. REPLACE THIS WITH AN OBJECT
        double[] ar = new double[MAX_SIZE];
        int capacity = ar.length;
        int size = 0;

        // Tell the user what to do
        println("Enter up to " + capacity + " real numbers.");
        println("Enter a negative number or 0 to quit.");

        // 2. CHANGE THE LOOP BOUNDS USING METHODS
        while (size < capacity)
        {

            // Read a number
            double num = scan.nextDouble();

            // If the user wants to exit, then leave
            if (num <= 0) break;

            // 3. USE A METHOD TO PUT THE DATA INTO THE OBJECT
            ar[size] = num;

            // DON'T NEED THIS ANY MORE
            size++;

        }
        // 8. CHANGE THIS TO USE A METHOD TO PRINT

        print("ar = {");
        if (size > 0)
        {
            print(ar[0]);

            for (int i = 1; i < size; i++)
                print(", " + ar[i]);
        }
        println("}");

    }
}
