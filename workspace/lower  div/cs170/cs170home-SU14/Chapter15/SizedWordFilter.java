/**
 * A CS 170 Interface Exercise.
 * 
 * @author (your name)
 * @version (the date)
 */
// EXERCISE: implement the Filter interface
//           Accept only Strings that are exactly size length
public class SizedWordFilter
{
    private int size;
    
    /**
     * Construct a SizedWordfilter object.
     * @param size the size of the word to accept.
     */
    public SizedWordFilter(int size)
    {
        this.size = size;
    }
}