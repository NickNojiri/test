import acm.program.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

/**
 * JTextArea with GridLayout.
 * 
 * @author Steve Gilbert
 * @version Fall 2011
 */
public class JTextAreaGridLayout extends Program
{
    private JTextArea ta = new JTextArea();
    private JTextArea tcopy = new JTextArea();
    /**
     * Add the components to a border layout.
     */
    public void init()
    {
        // 2 rows 1 column
        setLayout(new GridLayout(2, 1));
        
        // Create and initialize the text areas
        ta.setLineWrap(true);
        ta.setWrapStyleWord(true);
        ta.setFont(Font.decode("Comic Sans MS-bold-18"));
        
        tcopy.setFont(Font.decode("Times New Roman-italic-12"));
        tcopy.setLineWrap(true);
        tcopy.setWrapStyleWord(true);
        tcopy.setEditable(false);
        tcopy.setForeground(Color.BLUE);
        
        // Add the text area to the scroll pane
        add(new JScrollPane(ta));
        add(new JScrollPane(tcopy));
        add(new JLabel("Type your text in the area below"), NORTH);
        add(new JButton("Click to Copy"), SOUTH);
        
        addActionListeners();
    }
    
    /**
     * Copy top to bottom when clicked.
     */
    public void actionPerformed(ActionEvent e)
    {
        tcopy.setText(ta.getText());
    }
}
