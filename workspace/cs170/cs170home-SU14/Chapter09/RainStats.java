import java.util.*; // Scanner, Random
import java.io.*;
/**
 * RainStats - calculates rainfall statistics.
 *
 * @author (your name goes here)
 * @version (place the date here)
 */
public class RainStats
{
    public static final String INPUT_FILE = "rainfall-stats.txt";
    public static final String OUTPUT_FILE = "rainfall-summary.txt";
    
    
    /**
     * Writes and then reads the rainfall statistics.
     */
    public static void main(String[] args) throws IOException
    {
        createStatsFile();
        summarizeStatsFile(); // write this
    }
    
    /**
     * Write the summarizeStatsFile() Procedure
     * 1. Read the INPUT_FILE and Write to the OUTPUT_FILE
     * 2. Print the first line.
     * 3. On each subsequent lines, find out how many entries on line by
     *    reading the first value as an int. Then read that many
     *    entries as double values. Print the sum for each line
     *    in your output file. Don't assume that every input file
     *    will have 12 lines of output; it's possible that there
     *    could be only 2 or 3 lines of rainfall statistics (even
     *    though the createFileStats always produces 12).
     */
    public static void summarizeStatsFile() throws IOException
    {
        // Your code goes here.
    }
    
    /**
     * Generates the file for the rainfall statistics.
     */
    public static void createStatsFile() throws IOException
    {
        // PART I - Creates the Rainfall stats file.
        Random gen = new Random();
        PrintWriter out = new PrintWriter(INPUT_FILE);
        out.println("RAINFALL STATISTICS YEAR " + (gen.nextInt(2000)));

        for (int month = 1; month <= 12; month++)
        {
            int samples = 1 + gen.nextInt(28);
            out.print(samples); // Start each line with number of samples
            out.print('\t');    // Separate values with tabs
            for (int i = 0; i < samples; i++)
            {
                out.print(gen.nextDouble());  // Print out each sample.
                out.print('\t');
            }
            out.println(); // end each line.
        }
        out.close();
    }
}
