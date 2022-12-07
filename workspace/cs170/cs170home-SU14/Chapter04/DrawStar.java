import java.applet.*;
import java.awt.*;

/**
    The DrawStar applet.
    CS 170 : using the Graphics drawLine() method
    @author Stephen Gilbert
    @version 3-Fall 2011
*/
public class DrawStar extends Applet
{
    /**
     *  Draws a 5-sided star.
     *
     *  @param bob the guy who does the drawing.
     */
    public void paint(Graphics bob)
    {
        bob.drawLine(100,   0, 200, 200);
        bob.drawLine(200, 200,   0, 100);
        bob.drawLine(  0, 100, 200, 100);
        bob.drawLine(200, 100,   0, 200);
        bob.drawLine(  0, 200, 100,   0);
    }
}

