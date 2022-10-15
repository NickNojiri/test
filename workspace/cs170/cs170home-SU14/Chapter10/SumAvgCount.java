import java.awt.*;
import java.applet.*;
import java.awt.event.*;
import java.text.*;

/**
 *  SumAvgCount.java.
 *  Illustrates initializing, summing, and counting a 1-D array
 *  
 *  @author Stephen Gilbert
 *  @version Oct 22, 2009 3:45:56 PM
 */

public class SumAvgCount extends Applet
{
    // AWT Components for simple applet
    private Button calcIt = new Button("Process an Array");
    private Label output = new Label("", Label.CENTER);

    // Here's our array
    private double[] randAR = new double[100];

    /**
     *  Arrange the components.
     */
    public void init()
    {
        setLayout(new BorderLayout());
        add(output, "North");
        add(calcIt, "South");
        calcIt.addActionListener(new ActionListener() 
        {
            /**
             * Process the array when the button is pressed.
             *
             *  @param ae the ActionEvent
             */
            public void actionPerformed(ActionEvent ae)
            {
                // 1. Get the length of the array
                int len = randAR.length;

                // 2. Initialize with Math.random()
                for (int idx = 0; idx < len; idx++)
                {
                    randAR[idx] = Math.random() * len;
                }

                // 3. Calculate sum and average
                double sum = 0.0;
                double avg;
                for (double element : randAR)
                    sum += element;
                avg = sum / len;

                // 5. Count larger & smaller than average
                int larger = 0;
                int smaller = 0;
                for (double element : randAR)
                {
                    if (element < avg)
                        smaller++;
                    else if (element > avg)
                        larger++;
                }

                // 6. Display results
                output.setText(String.format(
                    "Sum = %,.0f, Avg = %,.0f, " + 
                    "Larger = %,.0f%%, Smaller = %,.0f%%",
                    sum, avg, 
                    ((double) larger / len) * 100.0,
                    ((double) smaller / len) * 100.0));
            }
        });
    }
}
