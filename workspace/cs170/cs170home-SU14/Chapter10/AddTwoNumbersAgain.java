import acm.program.*;
import acm.gui.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
/**
 * Using the TableLayout layout manager.
 * A CS 170 example program.
 *
 * @author Stephen Gilbert
 * @version Fall 2012
 */
public class AddTwoNumbersAgain extends Program
{
    private JTextField aTF = new JTextField(10);
    private JTextField bTF = new JTextField(10);
    private JLabel answerLabel = new JLabel("Answer", JLabel.CENTER);

    /**
     * Initialize the GUI.
     */
    public void init()
    {
        // Set the layout manager: 3 rows, 2 columns
        setLayout(new TableLayout(3, 2));
        setBackground(Color.WHITE);

        // Initialize the components
        aTF.setHorizontalAlignment(JTextField.RIGHT);
        bTF.setHorizontalAlignment(JTextField.RIGHT);

        // Add the components to the layout manager
        add(new JLabel("First number: ", JLabel.RIGHT));
        add(aTF);
        add(new JLabel("Second number: ", JLabel.RIGHT));
        add(bTF);
        add(new JLabel("")); // just a placeholder
        add(new JButton("Add"));

        // Add labels to the north and south
        add(new JLabel("Enter two numbers, click Add: "), NORTH);
        answerLabel.setFont(Font.decode("Impact-bold-48"));
        answerLabel.setForeground(Color.RED);
        add(answerLabel, SOUTH);

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
        answerLabel.setText(String.format("%s + %s = %.2f",
                                      aStr, bStr, result));

        // Clear the old values??
        bTF.setText("");     // clear everything from b
        aTF.selectAll();     // select all the text from a
        aTF.requestFocus();  // set caret in a
    }


    public static final int APPLICATION_WIDTH = 500;
    public static final int APPLICATION_HEIGHT = 300;
}
