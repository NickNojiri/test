import acm.program.*;
import acm.graphics.*;
import acm.util.*;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

/**
 *  Bounce a new GBall using polar coordinates.
 *  Illustrates problems with extending GOval (contraction).
 *
 *  @author Stephen Gilbert
 *  @version Fall 2011
 */
public class PolarBounce3 extends GraphicsProgram
{
    /*
     * Instance variables;
     */
    private GBall[] bouncers;         // the balls we'll bounce
    
    // Time (in milliseconds) for each frame
    private static final int FRAME_RATE = 1000 / 30;

    private RandomGenerator gen = new RandomGenerator();
    
    /**
     * Initialize the variables and the screen
     */
    public void init()
    {
        // A black background
        setBackground(Color.BLACK);
        add(new JLabel("Click to start bouncing."), NORTH);
        
        // An array of six randomly sized & colored balls
        bouncers = new GBall[6];
        for (int i = 0; i < bouncers.length; i++)
        {
            bouncers[i] = new GBall(randSize(), randPos(), randColor());
            add(bouncers[i]);
        }
    }
    
    //------------ HELPER METHODS -----------------------------
    /**
     * Returns a random size from 10.0 to 39.99 for the ball.
     * @return random size from 10.0 to 39.99 for the ball.
     */
    private double randSize()
    {
        return gen.nextDouble(10.0, 40.0);
    }
    
    /**
     *  Returns a random location for the ball.
     *  @return random Point between 0 and width and 0 and height
     */
    private Point randPos()
    {
        return new Point(gen.nextInt(25, getWidth() - 50),
                          gen.nextInt(25, getHeight() - 50));
    }
    
    /**
     *  Generate a random color for ball.
     *  @return pastel colors all at least 128.
     */
    private Color randColor()
    {
        return gen.nextColor();
    }
    
    /**
     *  The basic animation loop for every program.
     */
    public void run()
    {
        waitForClick(); // wait for a mouse click to start
        while (true)
        {
            advanceOneFrame();
            pause(FRAME_RATE);
        }
    }
    
    /**
     * Move the ball. If the ball hits any of the
     * walls, then adjust the direction of travel.
     * NOTE: THIS VERSION MODIFIES EACH BALL SIZE AND WIDTH
     */
    public void advanceOneFrame()
    {
        // Move the ball
        for (GBall ball: bouncers)
        {
            ball.move(getGCanvas());
            if (ball.getX() <= 0 || ball.getX() + ball.getWidth() >= getWidth())
            {
                ball.setSize(ball.getWidth() * .9, ball.getHeight() * 1.1);
            }
            if (ball.getY() <= 0 || ball.getY() + ball.getHeight() >= getHeight())
            {
                ball.setSize(ball.getWidth() * 1.1, ball.getHeight() * .9);
            }
        }
    }
    
}