import java.util.*;
/**
 *  Deck.java: a deck of cards.
 *
 * @author Stephen Dean Gilbert
 * @version May 8, 2008
 */

public class Deck
{
    private ArrayList<PlayingCard> cards;

    /**
     * Construct an empty deck.
     */
    public Deck()
    {
        cards = new ArrayList<PlayingCard>();
    }

    /**
     * Add a new card to the deck.
     * @param card to add.
     */
    public void addCard(PlayingCard card)
    {
        cards.add(card);
    }

    /**
     * Returns the number of cards left in the deck.
     * @return the number of cards left in the deck.
     */
    public int cardsLeft()
    {
        return cards.size();
    }

    /**
     *  Returns true if there are more cards to be dealt.
     *  @return true if there are more cards to be dealt.
     */
    public boolean hasMore()
    {
        return !cards.isEmpty();
    }

    /**
     * Deal the top card on the deck. null if empty.
     * @return top card or null.
     */
    public PlayingCard dealCard()
    {
        if (cards.isEmpty())
            return null;
        else
            return cards.remove(0);
    }

    /**
     * Remove all of the cards.
     */
    public void removeAllCards()
    {
        cards.clear();
    }

    /**
     * Shuffle the deck.
     */
    public void shuffle()
    {
        Collections.shuffle(cards);
    }

    // EXERCISE 7A: Add code to sort the deck.




}











