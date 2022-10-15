import acm.program.*;
/**
 *  CurrencyConverter.java.
 *  Use a loop to convert dollars to Euros.
 *
 *  @author Stephen Dean Gilbert
 *  @version Summer 2014
 */
public class CurrencyConverter extends ConsoleProgram
{
    /**
     *  Convert dollars to Euros.
     */
    public void run()
    {
        println("Dollar to Euro Currency Converter");
        println("=================================\n");

        double euro = readDouble("How much (in $) is one Euro? ");


        // Ask user for a dollar value
        String dollarStr = readLine("Dollar value (Q to quit): ");
        // While the user did not enter a "Q"
            // Convert input to a double
            // Calculate the converted value
            // Print: "100.00 dollar = 79.45 Euro"
            // Prompt and get next dollar amount
        // End of loop
    }
}
