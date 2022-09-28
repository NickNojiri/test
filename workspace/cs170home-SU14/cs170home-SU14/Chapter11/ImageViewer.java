import acm.program.*;
import acm.graphics.*;

import java.util.*;
import javax.swing.*;

import java.awt.*;
import java.awt.event.*;

/**
 * Display a GImage object in the Interactions pane.
 * 
 * @author Stephen Gilbert
 * @version Fall 2010
 */

public class ImageViewer extends GraphicsProgram
{
    /**
     * Display an image, when passed a 2D array of Pixels.
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
     * Initialize the user interface
     */
    public ImageViewer()
    {
        start();
        // Set the background to black
        setBackground(new Color(0, 0, 0));
        img = new GImage(new int[][] {{0},{0}});
        add(new JLabel("CS 170 GImage Viewer"), NORTH);
        add(img, 0, 0);
        adjustSize();
    }

    /**
     *  Adjust the size after the image has been modified.
     */
    public void adjustSize()
    {
        if (img != null)
            if (img.getWidth() < 250 || img.getHeight() < 200)
                setSize(250, 200);
            else
                setSize((int)(img.getWidth() + 5), 
                        (int)(img.getHeight() + 5));
         repaint();
    }
    
    
    private GImage img;                 // Stores the image
    private JLabel statusLbl;           // Display the status

}
