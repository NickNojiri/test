import java.awt.*;
/**
 * Using Nested Loops with Pictures.
 * 
 * @author (your name goes here)
 * @version (the date goes here)
 */
public class NestedPics
{
    /**
     * Modify your picture using nested loops.
     * @param pic your picture
     */
    public static void modify(Picture pic)
    {
        // Your code will go here
    }
    
    /**
     * Let's open and modify some Pictures.
     */
    public static void main(String[] args)
    {
        Picture p = new Picture("images/flowers.jpg");
        p.show();
        // Complete this procedure
        modify(p);
        p.repaint();
    }
}