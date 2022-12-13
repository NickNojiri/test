import java.util.*;
/**
 *  ArrayOperations (Gaddis Problem 5.10).
 *  Spring 2011
 *
 *  @author (your name goes here)
 *  @version (place the date here)
 */
public class ArrayOperations
{
    /**
     * Test the array operations.
     * This is problem 10 in Chapter 5 of the Gaddis book.
     */
    public static void main(String[] args)
    {
        double[] nums = getRandomNumbers();

        System.out.println("Number of elements:");
        System.out.println("Sum of the elements:");
        System.out.println("Average of all elements:");
        System.out.println("Largest value:");
        System.out.println("Smallest value:");
        System.out.println("Array contents:");
    }

    /**
     * Write the method getTotal() that takes an
     * array of double and returns the sum.
     */


    /**
     * Write the method getAverage() that takes an
     * array of double and returns the average.
     */


    /**
     * Write the method getHightest() that returns
     * the largest element in an array.
     */

    /**
     * Write the method getLowest() that returns the
     * smallest element in an array.
     */

    /**
     * Returns an array of random doubles less than 100.
     * Length will be between 2 and 11.
     */
    public static double[] getRandomNumbers()
    {
        Random gen = new Random();
        double[] nums = new double[2 + gen.nextInt(10)]; // 2-11
        int len = nums.length;
        for (int i = 0; i < len; i++)
            nums[i] = Double.parseDouble(
                  String.format("%.2f", Math.random() * 100));
        return nums;
    }

}
