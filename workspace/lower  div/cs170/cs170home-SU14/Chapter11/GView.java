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
 * @version Fall 2012
 */

public class GView extends GraphicsProgram
{
    /**
     * Display a static image.
     */
    public static void show(GImage im)
    {
        GView viewer = getInstance();
        viewer.remove(viewer.img);
        viewer.img = im;
        viewer.add(im, 0, 0);
        viewer.adjustSize();
        if (frame != null)
        {
            frame.setAlwaysOnTop(true);
            frame.toFront();
        }
    }
    

    private static GView program;
    private static JFrame frame;

    /**
     * Singleton. One GView instance.
     */
    private static GView getInstance()
    {
        if (program == null)
        {
            program = new GView();
            Container c = program;
            while (c != null && (!(c instanceof JFrame)))
                c = c.getParent();
            if (c != null)
                frame = (JFrame)(c);
        }
        return program;
    }
    
    /**
     * Display an image, when passed a 2D array of Pixels.
     */
    public static void show(int[][] pixels)
    {
        GView viewer = getInstance();
        viewer.remove(viewer.img);
        viewer.img = new GImage(pixels);
        // Add the image, adjust the size
        viewer.add(viewer.img, 0, 0);    
        viewer.adjustSize();
    }
    
    /**
     * Initialize the user interface
     */
    public GView()
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
                        (int)(img.getHeight() + 85));
         repaint();
    }
    
    
    private GImage img;                 // Stores the image
    private JLabel statusLbl;           // Display the status

}
