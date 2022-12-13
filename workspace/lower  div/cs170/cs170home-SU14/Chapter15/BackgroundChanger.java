import java.awt.*;
import java.awt.event.*;
/**
 * A class that extends MouseAdapter.
 * Changes the background of the container to the
 * foreground color of the component.
 * 
 * @author Steve Gilbert
 * @version Fall 2011
 */
public class BackgroundChanger extends MouseAdapter
{
    /**
     * Flips the foreground and background colors.
     */
    @Override
    public void mouseClicked(MouseEvent event)
    {
        Component c = (Component)(event.getSource());
        Color fg = c.getForeground();
        if (c.getParent() != null)
            c.getParent().setBackground(fg);
    }
}
