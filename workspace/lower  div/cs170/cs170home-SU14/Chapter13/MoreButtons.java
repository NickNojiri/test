import acm.program.*;
import acm.graphics.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

/**
 *  A CS 170 example using an object factory with more parameters.
 *
 *  @author Stephen Gilbert
 *  @version Fall 2011
 */
public class MoreButtons extends GraphicsProgram
{
    private GLabel result = new GLabel("");

    /**
     * Initialize the program.
     */
    public void init()
    {
        JButton b1 = ButtonFactory.getButton("I'm first", 16, Color.BLUE);
        JButton b2 = ButtonFactory.getButton("I'm next", 8, Color.RED);
        JButton b3 = ButtonFactory.getButton("I'm last", 28, Color.GREEN);

        JPanel p = new JPanel();
        p.add(b1);
        p.add(b2);
        p.add(b3);
        add(p, NORTH);

        result.setFont("Serif-bold-48");
        result.setColor(Color.RED);
        add(result);

        addActionListeners();
    }

    /**
     * Show the button that was clicked.
     */
    public void actionPerformed(ActionEvent e)
    {
        JButton btn = (JButton) (e.getSource());
        String cmd = "Size: " + btn.getFont().getSize();
        Color color = btn.getForeground();
        cmd += ", Color (" + color.getRed() + "," + color.getGreen()
            + "," + color.getBlue() + ")";
        result.setLabel(cmd);
        result.setLocation(getWidth() / 2 - result.getWidth() / 2,
                           getHeight() / 2 - result.getHeight() / 2);
    }

    public static final int APPLICATION_HEIGHT = 250;
    public static final int APPLICATION_WIDTH = 800;
}
