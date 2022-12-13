import acm.program.*;
import acm.graphics.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

/**
 *  Displays a few JTextAreas using different constructors.
 *
 *  @author Stephen Gilbert
 *  @version Fall 2011
 */
public class JTextAreaWorld extends GraphicsProgram
{
    private JTextArea oneTA = new JTextArea();
    private JTextArea twoTA = new JTextArea(3, 20);
    private JTextArea threeTA = new JTextArea("No. 3");
    private JTextArea fourTA = new JTextArea("No. 4", 3, 20);
    
    /**
     * Initialize the components.
     */
    public void init()
    {
        add(new JLabel("oneTA:"), NORTH);
        add(new JScrollPane(oneTA), NORTH);
        
        add(new JLabel("twoTA:"), NORTH);
        add(new JScrollPane(twoTA), NORTH);
        
        add(new JLabel("threeTA:"), SOUTH);
        add(new JScrollPane(threeTA), SOUTH);
        
        fourTA.setLineWrap(true);
        fourTA.setWrapStyleWord(true);
        add(new JLabel("fourTA:"), SOUTH);
        add(new JScrollPane(fourTA), SOUTH);
    }
    
}
