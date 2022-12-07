import acm.program.*;
/**
    ACMGasMileage.java
    @author Lewis/Loftus, modification Steve Gilbert
    @version Spring 2011 using the ACM libraries
*/

public class ACMGasMileage extends ConsoleProgram
{
    /**
        Calculates fuel efficiency based on values entered by the user.
    */
    public void run()
    {
        int miles = readInt("Enter whole number of miles (25) : ");

        double gallons = readDouble("Enter gallons of gas (3.5) : ");

        double mpg = miles / gallons;

        println ("Miles Per Gallon: " + mpg);
    }

}
