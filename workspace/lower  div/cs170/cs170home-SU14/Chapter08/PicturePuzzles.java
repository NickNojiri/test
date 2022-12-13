import java.awt.*;
/**
 * Using Nested Loops with Pictures.
 * 
 * @author (your name goes here)
 * @version (the date goes here)
 */
public class PicturePuzzles
{
    /**
     * Solve the puzzle by modifying the pixels.
     * @param pic the Picture.
     */
    public static void solvePuzzle1(Picture pic)
    {
        // Put your code here
    }
    
    /**
     * Solve the puzzle by modifying the pixels.
     * @param pic the Picture.
     */
    public static void solvePuzzle2(Picture pic)
    {
        // Put your code here
    }

    /**
     * Solve the puzzle by modifying the pixels.
     * @param pic the Picture.
     */
    public static void solvePuzzle3(Picture pic)
    {
        // Put your code here
    }
    
    /**
     * Solve the puzzle by modifying the pixels.
     * @param pic the Picture.
     */
    public static void solvePuzzle4(Picture pic)
    {
        // Put your code here
    }
    
    /**
     * Let's open and modify some Pictures.
     */
    public static void main(String[] args)
    {
        // Problem 1
        Picture p1 = new Picture("images/51020-oranges.png");
        p1.show();
        solvePuzzle1(p1); // make the picture "normal"
        p1.repaint();
        
        // Problem 2
        Picture p2 = new Picture("images/puzzle-copper.png");
        p2.show();
        solvePuzzle2(p2); // make the picture "normal"
        p2.repaint();
        
        // Problem 3
        Picture p3 = new Picture("images/51020-poppy.png");
        p3.show();
        solvePuzzle3(p3); // make the picture "normal"
        p3.repaint();
        
        // Problem 4
        Picture p4 = new Picture("images/puzzle-iron.png");
        p4.show();
        solvePuzzle4(p4); // make the picture "normal"
        p4.repaint();
    }
}