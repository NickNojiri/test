import java.awt.*;
import java.applet.*;
/**
 * Draw thicker ovals using lines and fillOval.
 *
 *  @author Stephen Gilbert
 *  @version Feb 25, 2009 2:45:12 PM
 *
 */
public class DrawOvals extends Applet
{
    public void paint(Graphics pen)
    {
        int x = 10, y = 10;
        int w = getWidth() / 2 - 20;
        int h = getHeight() - 10;

        // 1. Single-line loop method
        pen.setColor(Color.BLUE);
        for (int i = 0; i < 10; i++)
            pen.drawOval(x + i, y + i, w - (i * 2), h - (i * 2));

        // 2. fillOval() method
        x = getWidth() / 2 + 10;
        pen.fillOval(x, y, w, h);
        pen.setColor(getBackground());
        pen.fillOval(x + 10, y + 10, w - (10 * 2), h - (10 * 2));
    }
}
