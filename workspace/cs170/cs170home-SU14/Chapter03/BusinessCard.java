import java.applet.*;
import java.awt.*;
import javax.swing.*;
/**
 * Create your own business card.
 *
 * @author (put your own name here)
 * @version (put the date here)
 */
public class BusinessCard extends Applet
{
    /**
     * Initialize the applet.
     */
    public void init()
    {
        // Leave this line alone.
        setFrameSize();
        // Add any other initialization you like.
    }

    /**
     * Draw your business card here.
     */
    public void paint(Graphics g)
    {
        // NOTE: Leave these three lines. They allow
        // your drawings (using pen, NOT g) to appear
        // without the "jaggies" you get from raw graphics.
        Graphics2D pen = (Graphics2D) g;
        pen.setRenderingHint (RenderingHints.KEY_ANTIALIASING,
            RenderingHints.VALUE_ANTIALIAS_ON);
        pen.drawRect(0, 0, 349, 224);

        // Do your paining here using the pen variable.

    }

    /**
     * Just ignore this; it lets me set the frame size in DrJava.
     */
    private void setFrameSize()
    {
        Container c = this;
        while (c != null && ! (c instanceof JFrame))
            c = c.getParent();
        // Assume 96 DPI for this assignment
        if (c != null)  c.setSize(new Dimension(350, 225));
    }
}
