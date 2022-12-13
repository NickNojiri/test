import java.util.Scanner;
import java.util.ArrayList;
/**
 * CS 170 Example.
 * Illustrates using an interface.
 * 
 * @author (your name)
 * @version (the date)
 */
public class TestFilter
{
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        System.out.println("Enter any number of words. Enter done to exit.");
        
        ArrayList<Object> a = new ArrayList<Object>();
        String word = cin.next();
        while (! word.equals("done"))
        {
            a.add(word);
            word = cin.next();
        }
        
        System.out.println("Before: " + a);
        // After - create a Filter object and print the result
//        Filter f = new SizedWordFilter(3);
//        ArrayList<Object> b = FilteredCollector.collectAll(a, f);
//        System.out.println("After filtering: " + b);
    }
}