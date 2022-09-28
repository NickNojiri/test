/**
 *  Variable-Parameter methods.
 *
 *  @author Stephen Gilbert
 *  @version Spring 2011
 *
 */
public class VariableParameters
{
    /**
     *  Compute the maximum of two doubles.
     * 
     *  @param a the first number.
     *  @param b the second number.
     *  @return the maximum of a and b.
     */
    public double max(double a, double b)
    {
        return a < b ? b : a;
    }

    /**
     *  Compute the maximum of three doubles.
     * 
     *  @param a the first number.
     *  @param b the second number.
     *  @param c the third number.
     *  @return the maximum of a, b and c.
     */
    public double max(double a, double b, double c)
    {
        return max(a, max(b, c));
    }

    /**
     *  Compute the maximum of four doubles.
     * 
     *  @param a the first number.
     *  @param b the second number.
     *  @param c the third number.
     *  @param d the third number.
     *  @return the maximum of a, b, c and d.
     */
    public double max(double a, double b, double c, double d)
    {
        return max(d, max(a, max(b, c)));
    }

    /**
     * Returns the maximum of any number of doubles.
     * 
     * @param nums a list of double parameters.
     * @return the maximum of the list of doubles.
     */

    /**
     *  Call the variable-parameter version of max().
     */
    public void run()
    {
        // Passing different numbers of parameters.
        double d1 = max(10, 20);            // 2 parameters
        double d2 = max(10, 20, 30, 50);    // 4 parameters
    }
}












