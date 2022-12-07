import acm.program.*;
import acm.graphics.*;
import acm.util.*;

import java.util.*;
import javax.swing.*;

import java.awt.*;
import java.awt.event.*;

/**
 * Manipulating images as 2D arrays.
 *
 * @author (put your name here)
 * @version (put the date here)
 */

public class ImageManipulation extends GraphicsProgram
{
    // Select the file to open.
    public static String FILE_NAME = "images/billiards.jpg";

    // Use the above image when checking. You can change it to
    // something else or pick a file while messing around with it.

    // An image that we can manipulate
    private GImage img = new GImage(FILE_NAME);

    /**
     * Handle the button clicks.
     */
    public void actionPerformed(ActionEvent e)
    {
        Object clicked = e.getSource();

        // Step 1: Retrieve the pixels from the image


        // Handle each of the buttons
        if (clicked == darkenBtn)
        {
            // 1. Darken each of the pixels in the array
            //  - Create a nested loops that visit each element in pixels
            //  - Inside the inner loop, construct a Color object using element
            //  - Make the Color object "darker" by using the darker() method
            //      -- Store the result back in the Color object
            //  - Call the Color object's getRGB() method and store the
            //      result back in the current array element

            statusLbl.setText("Image darkened.");
        }
        else if (clicked == grayBtn1)
        {
            // 2. Process the array of pixels (two methods; try both)
            //  -- Follow instructions in "darken" to loop through the picture
            //  -- After creating a Color object, extract rgb color values
            //      using getRed(), getBlue(), and getGreen(). Store
            //      these in local int variables.
            //  -- For first run, average the pixel values by adding the red,
            //      green and blue together and dividing by 3. Use this
            //      number and the 3-parameter Color constructor to construct
            //      a gray Color object.
            //  -- Extract the gray object's getRGB() and store it back
            //      in the pixesl array

            statusLbl.setText("Grayscale Average Image.");
        }
        else if (clicked == grayBtn2)
        {
            //  3.  Do the same thing as the previous button, but multiply the
            //      individual values by the human visual luminance percentages
            //      like this: red (.299), green(.587), blue(.114). Add the
            //      three numbers together to construct your gray Color object,
            //      before storing it's RGB value back in the array.

            statusLbl.setText("Grayscale Luminance Image.");
        }
        else if (clicked == mirrorBtn)
        {
            // 4. Process the array of pixels to create a mirror image.
            //  -- For the column loop bounds (len), use pixels[0].length / 2
            //  -- Copy pixels[r][c] to pixels[r][len - 1 - c]
            // This copies the left half to the right half for the mirror image.

            statusLbl.setText("Mirror Image.");
        }
        else if (clicked == rotateBtn)
        {
            // 5. Rotate the entire matrix to the right.
            // Follow the process from the handout to rotate a matrix to
            // the right. Then, assign your rotated matrix back to pixels.

            statusLbl.setText("Rotated Image.");
        }
        else if (clicked == shrinkBtn)
        {
            // 6. Create a new array 1/2 the size of the original
            //    Copy every other pixel into the new array and then
            //    assign the new array to pixels.

            statusLbl.setText("Shrunk Image.");
        }
        else if (clicked == resetBtn)
        {
            img.setImage(FILE_NAME);
            pixels = img.getPixelArray();
            statusLbl.setText("Original Image.");
        }

        // Remove the old image and create a new one
        img.setImage(MediaTools.createImage(pixels));
        adjustSize();
    }


    /**
     *  Adjust the size after the image has been modified.
     */
    public void adjustSize()
    {
        setSize((int)(img.getWidth() + 5), (int)(img.getHeight() + 110));
    }


    /**
     * Initialize the user interface
     */
    public void init()
    {
        // Set the background to black
        setBackground(new Color(0, 0, 0));

        // Initialize the GUI
        darkenBtn = new JButton("Dark");
        grayBtn1 = new JButton("Gray #1");
        grayBtn2 = new JButton("Gray #2");
        mirrorBtn = new JButton("Mirror");
        rotateBtn = new JButton("Rotate");
        shrinkBtn = new JButton("Shrink");
        resetBtn = new JButton("Reset");

        statusLbl = new JLabel("Welcome to CS 170 - Image Manipulation");

        add(darkenBtn, SOUTH);
        add(grayBtn1, SOUTH);
        add(grayBtn2, SOUTH);
        add(mirrorBtn, SOUTH);
        add(rotateBtn, SOUTH);
        add(shrinkBtn, SOUTH);
        add(resetBtn, SOUTH);
        add(statusLbl, NORTH);

        addActionListeners();

        add(img,0, 0);
        adjustSize();
    }

    /**
     * User interface controls
     */
    private JButton darkenBtn;          // Darken the image
    private JButton grayBtn1;           // Gray-scale image
    private JButton grayBtn2;           // Gray-scale image
    private JButton mirrorBtn;          // Mirror the image
    private JButton rotateBtn;          // Rotate the image right
    private JButton shrinkBtn;          // Shrink the image
    private JButton resetBtn;           // Original image
    private JLabel statusLbl;           // Display the status

}
