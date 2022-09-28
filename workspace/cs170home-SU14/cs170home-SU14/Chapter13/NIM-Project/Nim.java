import java.awt.*;
import acm.program.*;
import acm.io.*;

/**
 *  This is the game of Nim and contains the main() method.
 *
 *  @author (your name goes here)
 *  @version (put the date here)
 */
public class Nim extends ConsoleProgram
{
    // Program-wide I/O object
    private IOConsole cons = this.getConsole();
    
    /**
     *  This will start the game of Nim.
     */
    public void run()
    {
        // Set up the console, colors, etc. (Optional)
        do
        {
            println("Welcome to the game of Nim!");
            
            // Create a Game object, passing it the IOConsole
            Game nim = new Game(cons);
            nim.play();
            
        } while (readLine("\nPlay again (y/n)? ").startsWith("y"));
        
        println("Thanks for playing!!!");
    }
    
    /**
     * The standard Java entry point. DON'T MODIFY.
     * @param args the command-line arguments.
     */
    public static void main(String[] args)
    {
        new Nim().start(args);
    }
}
