import java.applet.*;
import java.awt.*;
/**
    The ThreeDRect applet.
    CS 170 : using the Graphics draw3DRect() method
    @author Stephen Gilbert
    @version 3 - Fall 2012
*/

public class ThreeDRect extends Applet
{
    /**
     *  Draws a 3D rectangle.
     *  @param pen the Graphics pen to draw with.
     */
    public void paint(Graphics pen)
    {
        // Clear the background
        pen.setColor(Color.lightGray);
        pen.fillRect(0, 0, 200, 200);

        // Draw the 3D rectangles
        // Note that these are the same color as the background
        pen.draw3DRect( 50,   50, 75, 37, true);
        pen.draw3DRect( 51,   51, 73, 35, true);
        pen.draw3DRect( 52,   52, 71, 33, true);
        pen.draw3DRect( 53,   53, 69, 31, true);
    }
}
