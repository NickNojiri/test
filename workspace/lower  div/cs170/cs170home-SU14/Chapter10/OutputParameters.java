import acm.program.*;
import acm.io.*;

/**
 *  A program to print the average output temperatures.
 *
 *  @author Steve Gilbert
 *  @version Spring 2011
 */
public class OutputParameters extends ConsoleProgram
{
    /**
     *  Use arrays in an input procedure.
     */
    public void run()
    {
        println("Count days above average temperatures.");
        int numDays = readInt("How many days to input? ");

        double[] temps = new double[numDays];

        readData(temps);   // temps will be "filled in" in procedure
        printResults(temps);  // An output procedure
    }

    /**
     * Read n temperatures into the array a.
     * @param a the array to populate
     */
    public void readData(double[] a)
    {
        // Ask the user to enter n temperatures
        println("Please enter " + a.length + " temperatures.");

        // Fill in the array supplied as a parameter
        for (int i = 0; i < a.length; i++)
            a[i] = readDouble("# " + (i + 1) + ": ");
    }

    /**
     * Print the number of days greater than average.
     * @param a an array of temperatures
     */
    public void printResults(double[] a)
    {
        // 1. Find the average
        double sum = 0.0;
        for (double temp : a) sum += temp;
        double average = sum / a.length;

        // 2. Count the number of days greater than that
        int count = 0;
        for (double temp : a)
            if (temp > average)
                count++;

        // 3. Print the results
        println();
        println("There were " + count + " days with a temperature");
        println(String.format("greater than average (%.1f)", average));
    }
}
