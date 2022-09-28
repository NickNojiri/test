import acm.program.*;
import acm.graphics.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
/**
 *  A CS 170 example using an object factory.
 *
 *  @author Stephen Gilbert
 *  @version Fall 2011
 */
public class BlueButtons extends GraphicsProgram
{
    private GLabel result = new GLabel("");

    /**
     * Initialize the program.
     */
    public void init()
    {
        JButton b1 = ButtonFactory.getBigBlueButton();
        JButton b2 = ButtonFactory.getBigBlueButton();
        JButton b3 = ButtonFactory.getBigBlueButton();

        b1.setLabel("I'm the FIRST button");
        b2.setLabel("But I'm the bluest.");

        add(b1, NORTH);
        add(b2, NORTH);
        add(b3, NORTH);

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
        result.setLabel(e.getActionCommand());
        result.setLocation(getWidth() / 2 - result.getWidth() / 2,
                           getHeight() / 2 - result.getHeight() / 2);
    }

    public static final int APPLICATION_HEIGHT = 250;
    public static final int APPLICATION_WIDTH = 800;
}
