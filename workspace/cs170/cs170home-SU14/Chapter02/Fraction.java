/**
 * Fraction user-defined type.
 * @author Steve Gilbert
 * @version Spring 2010
 */
public class Fraction
{
    private long numerator = 0;
    private long denominator = 1;  // default 0/1

    /**
     * Construct a Fraction n/d.
     * @param n numerator
     * @param d denominator
     */
    public Fraction(long n, long d)
    {
        if (d == 0) 
            throw new IllegalArgumentException("Illegal 0 denominator.");
        numerator = n;
        denominator = d;
    }
    
    /**
     * Handle the equals() method.
     * @param other the other Fraction.
     */
    public boolean equals(Object other)
    {
        if (other instanceof Fraction)
        {
            Fraction rhs = (Fraction) other;
            if (numerator != rhs.numerator) return false;
            if (denominator != rhs.denominator) return false;
            return true;
        }
        return false;   
    }
}