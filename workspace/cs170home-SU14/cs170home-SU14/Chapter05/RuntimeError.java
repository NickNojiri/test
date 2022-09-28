import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

/**
 *  RuntimeError.java 
 *  Illustrates several possible run-time errors
 *  @author Stephen Gilbert
 *  @version 2.0 Summer 2014
 */

public class RuntimeError extends JApplet implements ActionListener
{
    private JButton one   = new JButton("How much is a Cat?");
    private JButton two   = new JButton("Problems with Math");
    private JButton three = new JButton("Nobody's Home");
    private JButton b;  // This has the value null

    public void init()
    {
        setLayout(new FlowLayout(FlowLayout.CENTER));
        add( one );
        add( two );
        add( three );
        one.addActionListener(this);
        two.addActionListener(this);
        three.addActionListener(this);
    }

    public void actionPerformed( ActionEvent theEvent )
    {
        if (theEvent.getSource( ) == one) convertCat();
        if (theEvent.getSource( ) == two) divideZero();
        if (theEvent.getSource( ) == three) tryNull();
    }
    
    void convertCat()
    {
        // NumberFormatException
        String num = "Cat";
        int bad = Integer.parseInt( num );
    }
    
    void divideZero()
    {
        // ArithmeticException
        int numerator = 3;
        int denominator = 0;
        int problem = numerator / denominator;
    }
    
    void tryNull()
    {
        // NullPointerException
        b.setLabel("Uh Oh!");
    }
}
