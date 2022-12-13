import java.awt.*;
import java.applet.*;
import java.util.*;

/**
 * Generate random solid and filled rectangles.
 *
 *  @author Stephen Gilbert
 *  @version Fall 2012
 */

public class RandRect extends Applet
{
    /**
     * Draw random solid and filled rectangles.
     */
    public void paint(Graphics pen)
    {
        int mid = getWidth() / 2;

        // This is a "loop" that repeats the actions it contains 25 times
        for (int i = 0; i < 25; i++)
        {
            int x = randGen.nextInt(mid);
            int y = randGen.nextInt(getHeight());
            int width = randGen.nextInt(mid - x);
            int height = randGen.nextInt(getHeight() - y);

            // Left of the screen
            pen.setColor(randColor());
            pen.drawRect(x, y, width, height);

            // Right of the screen
            x += mid;
            width = randGen.nextInt(getWidth() - x);
            height = randGen.nextInt(getHeight() - y);

            pen.setColor(randColor());
            pen.fillRect(x, y, width, height);
        }
    }

    // Array of colors to pick from.
    private static Color[] colors = {
        Color.BLUE, Color.CYAN, Color.DARK_GRAY, Color.GRAY,
        Color.GREEN, Color.LIGHT_GRAY, Color.MAGENTA,
        Color.ORANGE, Color.PINK, Color.RED, Color.YELLOW
    };

    // Random number generator.
    private static Random randGen = new Random();

    /**
     *  Pick a random color from the list.
     *  @return a random color from the list.
     */
    public static Color randColor()
    {
        return colors[randGen.nextInt(colors.length)];
    }
}
