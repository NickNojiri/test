import java.applet.*;
import java.awt.*;
import java.awt.event.*;

/**
 *  RuntimeError.java 
 *  Illustrates several possible run-time errors
 *  @author Stephen Gilbert
 *  @version 1.0, October 5, 2002
 */

public class RuntimeError extends Applet implements ActionListener
{
    private Button one   = new Button("How much is a Cat?");
    private Button two   = new Button("Problems with Math");
    private Button three = new Button("Nobody's Home");
    private Button b;  // This has the value null

    public void init()
    {
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
