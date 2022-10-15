import acm.program.*;
import acm.graphics.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

/**
 * Fills an ArrayList with Card images and deals them
 * when the Deal card button is clicked.
 *
 * @author Stephen Gilbert
 * @version Fall 2012.
 */
public class CardDemo extends GraphicsProgram
{
    /**
     * Cards array of cards.
     * Step 1: create an ArrayList of GImage objects name deck.
     */

    private GRect table;

    /**
     * Initialize the ArrayList with all of the available cards.
     */
    public void init()
    {
        // Create and center a table
        table = new GRect(450, 325);
        table.setFilled(true);
        table.setFillColor(new Color(0, 128, 0));
        table.setLocation(getWidth() / 2 - table.getWidth() / 2, getHeight()
            / 2 - table.getHeight() / 2);
        add(table);

        // Populate the ArrayList with all the cards.
        final String suits = "csdh";
        final String ranks = "23456789tjqka";

        // Use nested loops to step through each suit and rank
        // Filenames should be "images/" + r + s + ".gif"

        // Add Deal button to the app and activate.
        add(new JButton("Deal"), SOUTH);
        addActionListeners();

    }

    /**
     * Deal a card from the deck.
     */
    public void actionPerformed(ActionEvent e)
    {
        if (e.getActionCommand().equals("Deal"))
        {
            GObject top = getElement(getElementCount() - 1);
            if (! deck.isEmpty())
            {
                double right = table.getX() + table.getWidth();
                if (top == table)
                    add(deck.remove(0), table.getX() + 5, table.getY() + 5);
                else if (top.getX() + top.getWidth() < right - top.getWidth())
                    add(deck.remove(0), top.getX() + 30, top.getY());
                else
                    add(deck.remove(0), table.getX() + 5, top.getY() + 50);
            }
        }
    }
    /**
     * The standard Java entry point. DON'T MODIFY.
     *
     * @param args the command-line arguments.
     */
    public static void main(String[] args)
    {
        new CardDemo().start(args);
    }
}
