import java.awt.*;
import java.io.*;
/**
 *  MySmallPicture - A CS 170 Lab Assignment.
 *
 *  @author (Put your name here)
 *  @version (Put today's date here)
 */
public class MySmallPicture
{
    /** The name of the image file. CHANGE THIS */
    public static String fileName = "StephenGilbert.jpg";
    /**
     * Open, scale, decorate and save your picture.
     */
    public static void main(String[] args)
    {
        File file = new File(fileName);
        if (file.exists())
            fileName = file.getAbsolutePath();
        else
        {
            System.err.println(fileName + " not found in current folder.");
            return;
        }

        // 1. Open your large picture (in the current folder)
        // Do this by creating a Picture object
        // Use fileName as the variable for the file
        // Call the show() method to see what it looks like.
        
        

        // 2. Find out how large it is and store in some variables

        // 3. Scale it to a smaller picture

        // 4. Draw ON THE SMALLER PICTURE
        //  - get a Graphics2D pen from the smallPic
        //    Name your Graphics2D variable pen

        
        //  - uncomment these two lines for smooth rendering
        //pen.setRenderingHint (RenderingHints.KEY_ANTIALIASING,
        //    RenderingHints.VALUE_ANTIALIAS_ON);

        //   - set the pen color to draw the frame as you like

        //  - draw a frame around the picture

        //  - paint your name on the bottom
        //    change the pen color and font if you like
        
        // 5. Save your new smaller picture with a new name
        //  - MODIFY THE fileName VARIABLE and use it with write().

        // Load the modified picture and look at it
        Picture modified = new Picture(fileName);
        modified.show();
    }
}
