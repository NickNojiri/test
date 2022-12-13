import acm.program.*;
import acm.graphics.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

/**
 * Create an array of card images. Deal 5 when the
 * the Deal card button is clicked.
 *
 * @author Stephen Gilbert
 * @version Fall 2012
 */
public class CardDemo extends GraphicsProgram
{
    public void run()
    {
        // Step 1: create an array of 52 GImage objects named deck

        
        // These represent the suits and ranks of the cards
        final char[] suits = {'c', 's', 'd', 'h'};
        final char[] ranks = {'2', '3', '4', '5', '6', '7',
            '8', '9', 't', 'j', 'q', 'k', 'a'};

        // Step 2: Populate the array
        // Each card has a name like "cards/2c.gif"
        // To initialize all 52 cards, use a nested loop
        //   - The outer loop goes through each suit
        //   - The inner loop goes through each rank
        //   - Inside the inner loop, paste the suit
        //     and rank together to create the file name
        //   - Create a GImage object and add it to the array

        


        // Wait for a mouse click
        waitForClick();

        // Deal 5 cards onto the table
        double w = deck[0].getWidth();
        double h = deck[0].getHeight();
        double top = APP_HEIGHT / 2 - h / 2;
        double left = APP_WIDTH / 2 - w * 2.5; // center middle card

        // Step 3: Deal the 5 cards
        // This solution generates the same number about 8% of the time.
        // When this happens, you get an "empty spot" on the table.
        // To fix, shuffle the elements in the array and then just
        // display the first five. (See Chapter 9.)
        for (int card = 0; card < 5; card++)
        {
            int imgNum = (int)(Math.random() * deck.length);
            GImage img = deck[imgNum];
            add(img, left + card * img.getWidth(), top);
        }
    }

    /**
     * Creates a table and adds the messages.
     */
    public void init()
    {
        setSize(APP_WIDTH, APP_HEIGHT);

        // Create and center a table
        GRect table = new GRect(getWidth() - 50, getHeight() * .75);
        table.setFilled(true);
        table.setFillColor(new Color(0, 128, 0));
        table.setLocation(getWidth() / 2 - table.getWidth() / 2,
                          20);
        add(table);

        // Put the message on the table
        GLabel message = new GLabel("CS 170 Poker. Click to Deal");
        message.setFont("Jokerman-28-bold");
        message.setColor(Color.YELLOW);
        double mx = table.getX() + table.getWidth() / 2 - message.getWidth() / 2;
        double my = table.getY() + message.getHeight() + 10;
        add(message, mx, my);
    }


    public static final int APP_WIDTH = 500;
    public static final int APP_HEIGHT = 300;

}
