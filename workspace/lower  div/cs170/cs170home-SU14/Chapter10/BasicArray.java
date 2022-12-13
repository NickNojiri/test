import acm.program.*;
import acm.io.*;

/**
 *  Demonstrates basic array handling.
 *
 *  @author Stephen Gilbert
 *  @version Fall 2012
 */
public class BasicArray extends ConsoleProgram
{
    private static final int LIMIT = 15;
    private static final int MULTIPLE = 10;

    /**
     *  Creates an array, fills it with various integer
     *  values, modifies one value, then prints them out.
     */
    public void run()
    {
        int[] list = new int[LIMIT];

        //  Initialize the array values
        for (int index = 0; index < LIMIT; index++)
           list[index] = index * MULTIPLE;

        list[5] = 999;  // change one array value

        //  Print the array values
        for (int value : list)
            print(value + "  ");
        println();
    }
}
