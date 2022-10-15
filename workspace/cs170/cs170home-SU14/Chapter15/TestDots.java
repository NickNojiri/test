import java.applet.*;
import java.awt.*;
import java.util.*;
/**
 *  TestDots.java
 *  CS 170 Exercise
 *  
 *  @author (your name)
 *  @version (the date)
 */

public class TestDots extends Applet
{
    /**
     *  Create some dots and scatter them around
     *  the applet. Use component methods to set the
     *  size, location, and background color
     */
    public void init()
    {
        setBackground(Color.yellow);
        Random rand = new Random();
        setLayout(null);
        
        int width = getWidth();
        int height = getHeight();
        
        for (int i = 0; i < 10; i++)
        {
            Dot aDot = new Dot();
            add(aDot);
            aDot.setLocation(rand.nextInt(width), 
                             rand.nextInt(height));
            aDot.setForeground(new Color(rand.nextInt()));
            aDot.setRadius(rand.nextInt(25) + 3);
        }
    }
}
