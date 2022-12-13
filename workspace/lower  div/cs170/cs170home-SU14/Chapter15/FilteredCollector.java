import java.util.ArrayList;
/**
 * CS 170 Example; Illustrates using an interface type.
 * 
 * @author Stephen Gilbert
 * @version Spring 2011
 */
public class FilteredCollector
{
    /**
     * Stores all objects that are accepted by the
     * given Filter object.
     * 
     * @param objs and ArrayList<Object> that stores the data.
     * @param f the Filter that tells us whether to store it.
     */
    public static ArrayList<Object> 
        collectAll(ArrayList<Object> objs, Filter f)
    {
        ArrayList<Object> a = new ArrayList<Object>();
        for (Object o : objs)
            if (f.accept(o)) 
                a.add(o);
        return a;
    }
}













