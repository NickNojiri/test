import java.awt.*;
/**
 * Using Pixel Arrays
 *
 * @author (your name goes here)
 * @version (the date goes here)
 */
public class PixelArrays
{
    /**
     * Let's open and modify some Pictures.
     */
    public static void main(String[] args)
    {
        Picture pic = new Picture(FileChooser.pickAFile());
        if (pic != null)
        {
            pic.show();
            int height = pic.getHeight();
            int width = pic.getWidth();

            // Your code will go here

            // 1. Get an array

            // 2. Reduce the red


            // 3. Make it darker or lighter


            // 4. Invert all the colors


            // 5. Posterize the picture



            pic.repaint();
        }
    }
}






















