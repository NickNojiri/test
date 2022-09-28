import java.awt.*;
/**
 *  Dot.java.
 *  CS 170 Exercise
 *  
 *  @author (your name)
 *  @version (today's date)
 */
public class Dot extends Component
{
    private int radius;
    
    /**
     *  Set the default radius, and colors for each Dot. 
     */
    public Dot()
    {
        setRadius(10);
        setBackground(Color.green);
        setForeground(Color.red);
    }
    
    /**
     * Change the radius of the dot.
     * @param newRadius - new radius
     */
    public void setRadius(int newRadius)
    {
        radius = newRadius;
        setSize(radius * 2, radius * 2);
        setPreferredSize(getSize());
    }
    
    /**
     * Paints the component when its drawn.
     */
    public void paint(Graphics g)
    {
        g.fillOval(0, 0, getWidth(), getHeight());
    }
}
