import acm.program.*;
import acm.io.*;
import java.util.*;

/**
 *  DelArray.java.
 *  CS 170 Exercise
 *  Deleting items from a "partially filled" array
 *
 *  @author (Your name here)
 *  @version (The date here)
 */
public class DelArray extends ConsoleProgram
{
    /**
     * Deletes an element in an array given its position.
     *   - Does not worry about element order.
     *   - If index is out of bounds, don't do anything.
     * 
     * @param a the array of byte.
     * @param pos the int position.
     * @param size the number of valid elements
     * @return the new size after deletion
     */
    public int deleteElementNoOrder(byte[] a, int pos, int size)
    {
        // 1. If pos < 0 or pos >= size, just return old size
        // 2. Move element at size into pos
        // 3. Return new size
        return size;
    }
    
    
    /**
     * Deletes an element in an array given its position.
     *   - Keep the elements IN ORDER
     *   - If index is out of bounds, don't do anything.
     * 
     * @param a the array of byte.
     * @param pos the int position.
     * @param size the number of valid elements
     * @param the new size of the array
     */
    public int deleteElementOrdered(byte[] a, int pos, int size)
    {
        // 1. If pos < 0 or pos >= size, just return old size
        // 2. Copy elements from pos to size into position (loop)
        // 3. Return updated size
        return size;
    }    

    /**
     *  Adds items to a partially filled array.
     */
    public void run()
    {
        printHeading();
        Scanner cin = new Scanner(getReader());
        
        // Create an array of bytes.
        byte[] a = new byte[MAX_SIZE];
        int size = 0;
        int capacity = a.length;
        
        // Fill an array with some random values
        for (int i = 0; i < MAX_SIZE - 3; i++)
        {
            a[i] = (byte)(Math.random() * 127);
            size++;
        }
        
        // Want array initially ordered: from 0 to size
        Arrays.sort(a, 0, size);
        
        // Main loop: display, input, delete, display
        int pos = -1;
        do
        {
            display(a, size);
            println();
            pos = readInt("Enter position to delete. < 0 to exit: ");
            if (pos >= 0)
            {
                if (type.equalsIgnoreCase("U"))
                {
                    size = deleteElementNoOrder(a, pos, size);
                }
                else if (type.equalsIgnoreCase("O"))
                {
                    size = deleteElementOrdered(a, pos, size);
                }
                println();
            }
        } while (pos >= 0);
        
        println();
        print("--done");
    }

    // Maximum size of the array
    private final int MAX_SIZE = 15;
    // Type of deletion to perform
    private String type;
    
    /**
     * Prints the heading and initializes the type of deletion.
     */
    public void printHeading()
    {
        setFont("Consolas-bold-18");
        println("Deleting elements from a partially-filled array");
        println("-----------------------------------------------");
        
        boolean done = false;
        do {
            type = readLine("Delete (O)rdered, (U)nordered or (Q)uit? ");
            
            if (type.length() < 1)
            {
                println("Sorry; Answer must be O, U or Q.");
                continue;
            }
            else
            {
                type = type.substring(0, 1).toUpperCase();
                if (type.equals("Q"))
                {
                    readLine("--done--\nPress any key...");
                    System.exit(0);
                }
                else if (type.equals("O") || type.equals("U"))
                {
                    done = true;
                }
                else
                {
                    println("Sorry; Answer must be O, U or Q.");
                }
            }
        } while (! done);
        println();
    }
    
    /**
     * Displays an array showing the valid and invalid elements.
     *
     * @param a the array of byte.
     * @param size the number of valid elements
     */
    public void display(byte[] a, int size)
    {
        for (int i = 0; i < a.length; i++)
            print(String.format(" %2d ", i));
        println();
        for (int i = 0; i < a.length; i++)
            print("----");
        println();
        for (int i = 0; i < a.length; i++)
            if (i < size)
                print(String.format("%3d ", a[i]));
            else
                print("  X ");
        println();
    }
    
}
