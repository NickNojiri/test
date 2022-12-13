import acm.program.*;
import acm.graphics.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

/**
 *  CS 170 Exercise: display a few JButtons using different constructors.
 *
 *  @author (Your name here)
 *  @version (Add the date here)
 */
public class JButtonWorld extends GraphicsProgram
{
    private GOval theDot;
    private JButton btn1;
    private JButton btn2;
    private JButton btn3;
    
    /**
     * Initialize the components.
     */
    public void init()
    {
        // Size the app itself
        setSize(400, 250);
        setBackground(new Color(196, 196, 255));
        
        // Step 1. Create three JButtons

        // Step 2. Set mnemonics & tooltips for JButtons

//        add(btn1, SOUTH);
//        add(btn2, SOUTH);
//        add(btn3, SOUTH);
        
        // Add the GOval to the center of the app
        theDot = new GOval(100, 100);
        theDot.setFilled(true);
        theDot.setFillColor(Color.YELLOW);
        add(theDot, getWidth() / 2 - 50, getHeight() / 2 - 70);
        
        JMenuBar menubar = getMenuBar();
        int n = menubar.getMenuCount();
        for (int i = 0; i < n; i++)
        {
            JMenu menu = menubar.getMenu(i);
            if (menu.getText().equals("Edit"))
                menubar.remove(menu);
        }
        JMenu color = new JMenu("Color");
        color.setMnemonic('C');
        JMenuItem pick = new JMenuItem("Pick a Color...");
        pick.addActionListener(this);
        color.add(pick);
        menubar.add(color);
    }
    
    public void actionPerformed(ActionEvent e)
    {
        String cmd = e.getActionCommand();
        if (cmd.equals("Pick a Color..."))
        {
            Color c = JColorChooser.showDialog(getGCanvas(), "Pick a Background Color", getBackground());
            if (c != null)
                setBackground(c);
        }
    }
}
