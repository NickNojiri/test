import acm.program.*;
import acm.graphics.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
/**
 * GImage and 2D Arrays
 * 
 * @author (your name goes here)
 * @version (the date goes here)
 */
public class TwoDPics extends GraphicsProgram
{
    private GImage img; // Default image
    /**
     * Here's the code that you'll write.
     */
    public void changeMyPicture()
    {
        // 1. Get an array of pixels
        
        // 2. Process the array of pixels
        
        // 3. Pass your pixels array to show()
    }
    
    //////// YOU CAN IGNORE THE REST OF THIS /////////////////
    /**
     * Add some buttons.
     */
    public void init()
    {
        setBackground(Color.BLACK);
        add(new JLabel("CS 170 Image Viewer"), NORTH);
        add(new JButton("Pick a Photo"), SOUTH);
        add(new JButton("Modify the Picture"), SOUTH);
        adjustSize();
        addActionListeners();
    }
    
    /**
     * Handle button clicks.
     */
    public void actionPerformed(ActionEvent e)
    {
        JButton clicked = (JButton) (e.getSource());
        if (clicked.getActionCommand().startsWith("Pick"))
            pickAPicture();
        else
            changeMyPicture();
    }
    
    /**
     * Let's open a GImage picture.
     */
    public void pickAPicture()
    {
        String fname = FileChooser.pickAFile();
        if (fname != null)
        {
            img = new GImage(fname);
            add(img);
            adjustSize();
        }
    }
    
    /**
     * Changes the pixels in a GImage.
     */
    public void show(int[][] pixels)
    {
        // Remove the old image and create a new one
        remove(img);
        img = new GImage(pixels);
        // Add the image, adjust the size
        add(img, 0, 0);
        adjustSize();
    }
    
    /**
     * Adjusts the size to fit the image.
     */
    public void adjustSize()
    {
        if (img == null || img.getWidth() < 250 || img.getHeight() < 200)
            setSize(250, 200);
        else
            setSize((int)(img.getWidth() + 5), 
                   (int)(img.getHeight() + 115));
        repaint();
    }

}