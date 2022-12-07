import java.applet.*;
import java.awt.*;
/**
    The SimpleRect applet.
    CS 170 : the Graphics methods
        drawRect(), fillRect(), and clearRect() methods

    @author Stephen Gilbert
    @version 3 - Fall 2012
*/
public class SimpleRect extends Applet
{
    /**
     * Four rectangles, using different drawing methods.
     *  @param pen the pen to draw with.
     */
    public void paint(Graphics pen)
    {
        // Note width, height are 100 for all shapes
        pen.drawRect(   0,   0, 100, 100);
        pen.fillRect( 102,   0, 100, 100);
        pen.fillRect(   0, 102, 100, 100);
        pen.clearRect(102, 102, 100, 100);
    }
}

