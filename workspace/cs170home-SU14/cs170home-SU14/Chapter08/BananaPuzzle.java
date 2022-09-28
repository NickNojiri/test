import java.awt.*;
/**
 * Using Nested Loops with Pictures.
 * 
 * @author (your name goes here)
 * @version (the date goes here)
 */
public class BananaPuzzle
{
    /**
     * Solve the puzzle by modifying the pixels.
     * @param pic the Picture.
     */
    public static void solvePuzzle(Picture p)
    {
        // Put your code here
    }
    
    
    /**
     * Let's open and modify some Pictures.
     */
    public static void main(String[] args)
    {
        Picture p = new Picture("images/51020-banana.png");
        p.show();
        solvePuzzle(p); // make the picture "normal"
        p.repaint();
    }
}