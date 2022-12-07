import acm.program.*;
import acm.graphics.*;
import java.util.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

/**
 * Sorting a deck of cards.
 * 
 * @author Stephen Gilbert
 * @version Fall 2011
 */

public class CardSortDemo extends GraphicsProgram
{
    // Create Deck variable and a Deck object.
    Deck deck = new Deck();
    /**
     * The cardPile is the container that will hold the
     * cards as they are dealt on the table.
     */
    private GCompound cardPile = new GCompound();
    
    
    /**
     * The newDeck() method.
     * Populate the deck of cards with 52 unshuffled cards.
     * Call removeAllCards() on your deck.
     * Use the new-style for loop.
     */
    public void newDeck()
    {
        deck.removeAllCards();
        
        for (Suit suit : Suit.values())
            for (Rank rank : Rank.values())
            {
                deck.addCard(new PlayingCard(rank, suit));
            }
    }
    
    /**
     * Display the deck of cards on the table.
     */
    public void showCards()
    {
        cardPile.removeAll();
        int row = 0;
        int col = 0;
        while (deck.hasMore())
        {
            PlayingCard c = deck.dealCard();
            if (c.isFaceDown()) c.flip();
            cardPile.add(c, col++ * 25 + row * 8, row * 30);
            if (col > 12)
            {
                col = 0;
                row++;
            }
        }
    }
    
    /**
     *  shuffle(): shuffle a deck of cards.
     *  Shuffle's the deck using the Collections method.
     */
    public void shuffle()
    {
        deck.shuffle();
    }
    
 
    /**
     * Handle the button clicks.
     */
    public void actionPerformed(ActionEvent e)
    {
        Object clicked = e.getSource();
        
        // Adding a new deck to the table
        if (clicked == newDeckBtn)
        {
            newDeck();
            showCards();
        }
        else if (clicked == shuffleDeckBtn)
        {
            // Shuffle the cards
            newDeck();
            deck.shuffle();
            showCards();
        }
        else if (clicked == sortDeckBtn)
        {
            // Shuffle, then sort the cards
            newDeck();
            deck.shuffle();
            deck.sort();
            showCards();
        }
    }
    

    /**
     * Initialize the user interface.
     */
    public void init()
    {
        // Set the table color to a dark green
        setBackground(new Color(0, 128, 0));
        add(cardPile, 20, 20);
        
        // Initialize the GUI
        newDeckBtn = new JButton("New Deck");
        shuffleDeckBtn = new JButton("Shuffled Deck");
        sortDeckBtn = new JButton("Sorted Deck");
        statusLbl = new JLabel("Welcome to CardSortDemo");
        
        add(newDeckBtn, SOUTH);
        add(shuffleDeckBtn, SOUTH);
        add(sortDeckBtn, SOUTH);
        add(statusLbl, NORTH);

        addActionListeners();
    }

    /**
     * User interface controls.
     */
    private JButton newDeckBtn;         // New deck
    private JButton shuffleDeckBtn;     // Shuffling the deck
    private JButton sortDeckBtn;        // Sorting the deck
    private JLabel statusLbl;           // Display the status

    /** App width. */
    public static final int APPLICATION_WIDTH = 450;
    /** App height. */
    public static final int APPLICATION_HEIGHT = 325;
    
    /**
     * The standard Java entry point. DON'T MODIFY THIS METHOD.
     */
    public static void main(String[] args)
    {
        new CardSortDemo().start(args);
    }
}
