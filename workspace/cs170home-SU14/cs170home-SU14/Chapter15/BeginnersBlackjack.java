import acm.program.*;
import acm.graphics.*;

import java.util.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

/**
 * Deals a simple hand of BlackJack and displays it.
 * Dealer only plays after you've played.
 *
 * @author (place your name here)
 * @version (place the date here)
 */

public class BeginnersBlackjack extends GraphicsProgram
{
    // Create Deck variable and a Deck object.
    private Deck deck = new Deck();

    // EXERCISE 2: Create Hand variables for player and dealer.

    /**
     * The playerPile just shows the player's cards as they are dealt.
     * The dealerPile shows the dealer's cards when dealt.
     */
    private GCompound playerPile = new GCompound();
    private GCompound dealerPile = new GCompound();

    /**
     * The newDeck() method.
     * Populate the deck of cards with 52 shuffled cards.
     */
    public void newDeck()
    {
        deck.removeAllCards();

        for (Suit suit : Suit.values())
        {
            for (Rank rank : Rank.values())
            {
                deck.addCard(new PlayingCard(rank, suit));
            }
        }
        deck.shuffle();
    }

    /**
     *  Show the cards in a Hand on the table.
     *
     *  @param hand the Hand of cards
     *  @param pile the pile to display the cards
     */
    private void showCards(Hand hand, GCompound pile)
    {
        pile.removeAll();
        for (int i = 0; i < hand.getNumberOfCards(); i++)
        {
            PlayingCard c = hand.getCard(i);
            if (c.isFaceDown()) c.flip();
            pile.add(c, i * 20, 0);
        }
    }

    /**
     *  Score the game when Stand is pressed.
     *
     *  @param dealerHand dealer's hand
     *  @param playerHand player's hand
     */
//    private void scoreGame(Hand dealerHand, Hand playerHand)
//    {
//        int dealerPoints = dealerHand.evaluateHand();
//        int playerPoints = playerHand.evaluateHand();
//
//        String message = "";
//        if (dealerPoints > 21)
//        {
//            message = "Dealer Busts! You win.";
//        }
//        else if (dealerPoints == playerPoints)
//        {
//            message = "Tie Game!";
//        }
//        else if (playerPoints < dealerPoints)
//        {
//            message = "Dealer (" + dealerPoints + ") beats you ("
//                + playerPoints + ")";
//        }
//        else
//        {
//            message = "You (" + playerPoints + ") beat the dealer ("
//                + dealerPoints + ")";
//
//        }
//
//        // Set the buttons back to normal
//        dealHandBtn.setEnabled(true);
//        hitBtn.setEnabled(false);
//        standBtn.setEnabled(false);
//        statusLbl.setText(message);
//    }


    /**
     *  EXERCISE 6:  Write the showScore method.
     *  Display the score of a particular hand.
     *  @param hand the Hand to score.
     */


    /**
     * EXERCISE 8: Inner Classes
     * Create the DealHand class to respond to the dealHandBtn clicks.
     * The class needs to implement the ActionListener interface.
     */



    /**
     * Initialize the user interface.
     */
    public void init()
    {
        // Set the table color to a dark green
        setBackground(new Color(0, 128, 0));

        // Add the player and dealer piles to the table
        add(playerPile, 20, 20);
        add(dealerPile, getWidth() / 2 + 20, 20);


        // Initialize the three JLabels
        logoLbl = new JLabel(new ImageIcon("cards/21.gif"));
        statusLbl = new JLabel("Welcome to Beginner's Blackjack");

        // Add your labels to the program's surface.
        add(logoLbl, NORTH);
        add(statusLbl, NORTH);

        // Construct your JButtons and add them to the surface
        dealHandBtn = new JButton("Deal New Hand");
        hitBtn = new JButton("Hit Me");
        standBtn = new JButton("Stand");

        add(dealHandBtn, SOUTH);
        add(hitBtn, SOUTH);
        add(standBtn, SOUTH);

        // EXERCISE 5: Test the BlackjackHand class
        // newDeck();                       // initialize the deck
        // player = new BlackjackHand();    // initialize the player
        // player.add(deck.dealCard());     // deal two cards
        // player.add(deck.dealCard());
        // showCards(player, playerPile);   // display on table


        // EXERCISE 9: Hook up the dealHandBtn JButton

        // EXERCISE 10: Hook up the hitBtn JButton to an anonymous handler

        // EXERCISE 11: Finish the game with the Stand button
    }

    /**
     * User interface controls.
     */

    // Create three JLabel instance variables
    private JLabel statusLbl;
    private JLabel logoLbl;

    // Create three JButton instance variables
    private JButton dealHandBtn;
    private JButton hitBtn;
    private JButton standBtn;

    /** Application width. */
    public static final int APPLICATION_WIDTH = 350;
    /** Application height. */
    public static final int APPLICATION_HEIGHT = 250;

    /**
     * The standard Java entry point. DON'T MODIFY THIS METHOD.
     */
    public static void main(String[] args)
    {
        new BeginnersBlackjack().start(args);
    }
}
