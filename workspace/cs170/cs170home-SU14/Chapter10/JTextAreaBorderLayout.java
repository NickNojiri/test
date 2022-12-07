import acm.program.*;
import java.awt.*;
import javax.swing.*;

/**
 * JTextArea with BorderLayout.
 * 
 * @author Steve Gilbert
 * @version Fall 2011
 */
public class JTextAreaBorderLayout extends Program
{
    /**
     * Add the components to a border layout.
     */
    public void init()
    {
        setLayout(new BorderLayout());
        
        // Create and initialize the text area
        JTextArea ta = new JTextArea();
        ta.setLineWrap(true);
        ta.setWrapStyleWord(true);
        ta.setFont(Font.decode("Comic Sans MS-bold-18"));
        
        // Add the text area to the scroll pane
        add(new JScrollPane(ta));
        add(new JLabel("Type your text in the area below"), NORTH);
    }
}
