/**
 * Simplified Point class for CS 170 Lab exercise.
 * @author Stephen Gilbert
 * @version Spring 2013
 */
public class SimplePoint
{
    private int x;
    private int y;
    
    /**
     * Initializes x and y to 0;
     */
    public SimplePoint() {}
    
    /**
     * Initializes x and y.
     * @param x initial value.
     * @param y initial value.
     */
    public SimplePoint(int x, int y)
    {
        this.x = x;
        this.y = y;
    }
    
    /**
     * Returns the horizontal location.
     * @return the horizontal location.
     */
    public int getX()
    {
        return x;
    }
    
    /**
     * Returns the vertical location.
     * @return the vertical location.
     */
    public int getY()
    {
        return y;
    }
    
    /**
     * Sets a new location for the Point.
     * @param newX the new value for x
     * @param newY the new value for y
     */
    public void setLocation(int newX, int newY)
    {
        x = newX;
        y = newY;
    }
    
    @Override
    public boolean equals(Object other)
    {
        if (! (other instanceof SimplePoint))
            return false;
        
        SimplePoint p = (SimplePoint) other;
        return x == p.x && y == p.y;
    }
}
