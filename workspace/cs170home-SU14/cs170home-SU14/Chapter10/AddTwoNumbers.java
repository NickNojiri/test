import acm.program.*;
import acm.graphics.*;
import acm.gui.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
/**
 * Using JTextField components.
 * A CS 170 example program.
 *
 * @author Stephen Gilbert
 * @version Fall 2012
 */
public class AddTwoNumbers extends GraphicsProgram
{
    private JTextField aTF = new JTextField(10);
    private JTextField bTF = new JTextField(10);
    private GLabel answerLabel = new GLabel("");

    /**
     * Initialize the GUI.
     */
    public void init()
    {
        // Customize your JTextField objects here

        // Add interators to the north
        add(new JLabel("Enter two numbers, click Add: "), NORTH);
        add(aTF, NORTH);
        add(bTF, NORTH);
        add(new JButton(" Add "), NORTH);

        // Modify and add the answerLabel
        answerLabel.setFont("Impact-bold-48");
        answerLabel.setColor(Color.RED);
        add(answerLabel);

        // Hook up the button
        addActionListeners();
    }

    /**
     * Add the numbers and display the answer.
     */
    public void actionPerformed(ActionEvent e)
    {
        // Step 1 - get the text from each number text field
        String aStr = aTF.getText();
        String bStr = bTF.getText();

        // Step 2 - parse and add the results
        double result = Double.parseDouble(aStr)
            + Double.parseDouble(bStr);

        // Step 3 - display the result formatted
        answerLabel.setLabel(String.format("%s + %s = %.2f",
                                      aStr, bStr, result));
        center(); // center the label

        // Clear the old values??
        bTF.setText("");     // clear everything from b
        aTF.selectAll();     // select all the text from a
        aTF.requestFocus();  // set caret in a
    }

    /**
     * Center the result.
     */
    public void center()
    {
        answerLabel.setLocation(getWidth() / 2 - answerLabel.getWidth() / 2,
                           getHeight() / 2 + answerLabel.getHeight() / 2);
    }

    public static final int APPLICATION_WIDTH = 600;
    public static final int APPLICATION_HEIGHT = 200;
}
