import acm.program.*;
import acm.io.*;
import acm.util.*;

import java.util.*;

/**
 *  Some array examples.
 *
 *  @author Stephen Gilbert
 *  @version Fall 2012
 */
public class ArrayExamples extends ConsoleProgram
{
    /**
     *  Define some array variables and initialize them.
     */
    public void run()
    {
        // Declare a character array to hold grades
        char[] grades;
        grades = new char[5]; // use a literal for the size

        // An array to hold the pieces in a game
        final int N_TILES = 3;
        int[] pieces;
        pieces = new int[N_TILES * N_TILES];  // expressions

        // An array that holds String references
        final int LPP = 66;  // lines per page
        String[] lines = new String[LPP];

        Scanner fileItr = new Scanner(
            MediaTools.openDataFile("moby.txt"));

        while (fileItr.hasNextLine())
        {
            for (int i = 0; i < lines.length; i++)
                if (fileItr.hasNextLine())
                    lines[i] = fileItr.nextLine();
                else
                    lines[0] = null;

            // Process the lines in one "page" here
        }

        // SOME EXAMPLES WITH ARRAY COPIES
        int[] a = {3, 15, 0, -2, 7};     // original

        // Step 1: allocate space for copied elements
        int[] b = new int[a.length];    // same size

        // Step 2: copy each of the elements from a to b
        for (int i = 0; i < a.length; i++)
            b[i] = a[i];

        // Using the array clone() method
        int[] c = a.clone();

        // IF USING JAVA 5, COMMENT-OUT LINES 44-59
        // Using the Arrays.copyTo() method
        int[] d = Arrays.copyOf(a, a.length * 2);   // make larger
        int[] e = Arrays.copyOf(a, a.length / 2);   // truncate

        // Print them out.
        println("d = " + Arrays.toString(d));
        println("e = " + Arrays.toString(e));

        // Using the Arrays.copyOfRange() method
        int len = a.length;
        int[] f = Arrays.copyOfRange(a, 0, len);        // whole array
        int[] g = Arrays.copyOfRange(a, len / 2, len - 1);  // from middle
        int[] h = Arrays.copyOfRange(a, len / 2, len + 2); // expand

        println("f = " + Arrays.toString(f));
        println("g = " + Arrays.toString(g));
        println("h = " + Arrays.toString(h));

        // Comparing arrays
        int[] first = {1, 2, 3, 4, 5};
        int[] second = {1, 2, 3, 4, 5};
        int[] third = second;

        if (first == second) println("first and second ARE equal");
        if (first != second) println("first and second ARE NOT equal");
        if (second == third) println("second and third ARE equal");
        if (second != third) println("second and third ARE NOT equal");

        // Comparing two arrays for value equality
        boolean isEqual = first.length == second.length;
        if (isEqual)
        {
            for (int i = 0; i < first.length; i++)
                if (first[i] != second[i])
                {
                    isEqual = false;
                    break;
                }
        }

        if (isEqual) println("first and second ARE equal");

        // Using the Arrays.equals() method
        if (Arrays.equals(first, second))
            println("first and second have the SAME CONTENTS");

        // Printing an array the wrong way!
        println("a = " + a);

        // Printing with Arrays.toString()
        println("a = " + Arrays.toString(a));

        // Printing with the printList() procedure
        print("a = ");
        printList(a);
        println();
    }

    /**
     *  A procedure to print the elements of an int array.
     *  @param list the array to print
     */
    public void printList(int[] list)
    {
        print("{");
        if (list.length > 0)
        {
            print(list[0]);
            for (int i = 1; i < list.length; i++)
            {
                print(", ");
                print(list[i]);
            }
        }
        print("}");
    }


    /**
     * Adds all of the values in a double array.
     *
     *  @param list is an array of doubles.
     *  @return the sum of all of the elements
     */
    public double sum(double[] list)
    {
        double total = 0.0;
        for (double num : list) total += num;
        return total;
    }

    /**
     *  Initializing an array with a loop.
     *  Processing the loop with for-each
     */
    public void initializeArray()
    {
        double[] randNums = new double[2 + (int)(Math.random() * 100)];

        int len = randNums.length;      // get the size
        for (int i = 0; i < len; i++)   // visit every element
        {
            randNums[i] = Math.random() * len;  // modify element
        }

        // Using a "foreach" loop to print each element in randNums

        for (double num : randNums)
            print(num + " ");
        println();


        // An equivalent for loop
        for (int i = 0; i < len; i++)
        {
            double num = randNums[i];
            print(num + " ");
        }
        println();

    }

    /**
     *  Shuffling lottery-balls in an array.
     */
    public void firstLotteryShuffle()
    {
        int[] lotteryBalls = new int[50];

        // Initialize to hold 1-50
        int len = lotteryBalls.length;
        for (int i = 0; i < len; i++)
        {
            lotteryBalls[i] = i + 1;
        }

        // Shuffle the lottery balls (naive version)
        for (int i = 0; i < len; i++)
        {
            int j = (int)(Math.random() * len);

            int temp = lotteryBalls[j];
            lotteryBalls[j] = lotteryBalls[i];
            lotteryBalls[i] = temp;
        }

        // Shuffle using Fisher-Yates (Knuth) algorithm
        for (int i = len; i > 0; i--)
        {
            int j = (int)(Math.random() * i);

            int temp = lotteryBalls[j];
            lotteryBalls[j] = lotteryBalls[i];
            lotteryBalls[i] = temp;
        }
    }
}



