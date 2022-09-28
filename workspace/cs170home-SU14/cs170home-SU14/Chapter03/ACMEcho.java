import acm.program.*;
/**
 * A program that just echoes the user's input.
 * @author Stephen Gilbert
 * @version Spring 2011
 */
public class ACMEcho extends ConsoleProgram
{
    /**
     * Reads a line from the user and prints it.
     */
    public void run()
    {
        String message = readLine("Enter a line of text: ");
        println("You entered \"" + message + "\"");
    }
}
