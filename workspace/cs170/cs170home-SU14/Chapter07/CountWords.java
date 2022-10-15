import static java.lang.System.out;
/**
 *  A program that counts words.
 *
 *  @author (your name goes here)
 *  @version (place the date here)
 */
public class CountWords
{
    /**
     *  Counts the words in a String.
     *  @param args the command line.
     */
    public static void main(String[] args)
    {
        int words = countWords(moby);
        
        out.print("There are " + words + " words in the first ");
        out.println("paragraph of Moby Dick.");
    }
    
    /**
     *  Counts the number of words in a String.
     *  @param the String to count.
     *  @return the number of words.
     */
    public static int countWords(String str)
    {
        int numWords = 0;
        int len = str.length();
        
        for (int i = 0; i < len; i++)
        {
            char current = str.charAt(i);
        }
        
        return numWords;
    }

    private static String moby =
        "Call me Ishmael.  Some years ago--never mind how long " +
        "precisely--having little or no money in my purse, and nothing " +
        "particular to interest me on shore, I thought I would sail about a " +
        "little and see the watery part of the world.  It is a way I have of " +
        "driving off the spleen and regulating the circulation.  Whenever I " +
        "find myself growing grim about the mouth; whenever it is a damp, " +
        "drizzly November in my soul; whenever I find myself involuntarily " +
        "pausing before coffin warehouses, and bringing up the rear of every " +
        "funeral I meet; and especially whenever my hypos get such an upper " +
        "hand of me, that it requires a strong moral principle to prevent me " +
        "from deliberately stepping into the street, and methodically knocking " +
        "people's hats off--then, I account it high time to get to sea as soon " +
        "as I can.  This is my substitute for pistol and ball.  With a " +
        "philosophical flourish Cato throws himself upon his sword; I quietly " +
        "take to the ship.  There is nothing surprising in this.  If they but " +
        "knew it, almost all men in their degree, some time or other, cherish " +
        "very nearly the same feelings towards the ocean with me.";
    
}
