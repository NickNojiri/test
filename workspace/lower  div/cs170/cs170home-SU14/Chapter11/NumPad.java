import java.awt.*;
import java.applet.*;
import java.awt.event.*;
/**
 *  NumPad.java - illustrates initializing and using a simple 2D array.
 *  Simulates a numeric keypad.
 *
 *  @author Stephen Gilbert
 *  @version Spring 2011
 */
public class NumPad extends Applet
{
    private Label output = new Label("", Label.RIGHT);

    /**
     *  Initialize the keypad.
     */
    public void init()
    {
        setFont(new Font("Monospaced", Font.BOLD, 18));

        Panel p = new Panel();
        p.setLayout(new GridLayout(4, 3, 3, 3));

        String[][] keyCaps =
        {
            { "7", "8", "9" },
            { "4", "5", "6" },
            { "1", "2", "3" },
            { "0", "C", "." }
        };

        for (int row = 0; row < 4; row++)
        {
            for (int col = 0; col < 3; col++)
            {
                Button b = new Button(keyCaps[row][col]);
                p.add(b);
                b.addActionListener(new NumHandler());
            }
        }

        setLayout(new BorderLayout(5, 5));
        add("Center", p);
        add("North", output);
    }

    /**
     * Handles button clicks for the NumPad class.
     */
    class NumHandler implements ActionListener
    {
        /**
         *  Respond to button clicks.
         */
        public void actionPerformed(ActionEvent ae)
        {
            Button pressed = (Button)(ae.getSource());
            String cmd = pressed.getActionCommand();

            if ( cmd.equals("C")) output.setText("");
            else output.setText(output.getText() + cmd);
        }
    }
}

