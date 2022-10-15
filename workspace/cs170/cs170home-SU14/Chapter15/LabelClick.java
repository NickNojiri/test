import java.awt.*;
import java.awt.event.*;
import java.applet.*;
import javax.swing.*;

/**
 *  Shows how to use MouseAdapter to listen for clicks
 *  CS 170 example program
 *
 *  @author Stephen Gilbert
 *  @version Fall 2011
 */

public class LabelClick extends Applet
{
    /**
     * Set up the user interface.
     */
    public void init()
    {
        add(makeLabel("Yellow", Color.YELLOW));
        add(makeLabel("Red", Color.RED));
        add(makeLabel("Green", Color.GREEN));
        add(makeLabel("Blue", Color.BLUE));
    }
    
    /**
     * Create a JLabel given the text and color.
     * @param text - text to appear on label.
     * @param color - color of foreground.
     */
    private JLabel makeLabel(String text, Color color)
    {
        JLabel lbl = new JLabel(text);
        lbl.setFont(Font.decode("SansSerif-bold-24"));
        lbl.setForeground(color);
        lbl.setBackground(Color.BLACK);
        lbl.setOpaque(true);
        lbl.addMouseListener(changer);
        
        return lbl;
    }

    // Our BackgroundChanger component
    private BackgroundChanger changer = new BackgroundChanger();
}
