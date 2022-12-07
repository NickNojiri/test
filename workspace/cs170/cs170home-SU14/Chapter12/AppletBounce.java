import java.applet.*;
import java.awt.*;
import java.awt.event.*;

/**
 *  An applet version of the bouncing ball program.
 *  This version uses "double-buffering".
 *
 *  @author Stephen Gilbert
 *  @version Fall 2010
 */
public class AppletBounce extends Animator
{
    /*
     * Instance variables;
     */
    private Rectangle ball;     // the ball we'll bounce
    private int dx;             // how far it goes as x
    private int dy;             // how far in y

    /**
     *  Initialize the animation.
     */
    public void init()
    {
        // Black background, yellow ball
        setBackground(Color.BLACK);
        setForeground(Color.YELLOW);

        // A 50 pixel ball
        ball = new Rectangle(getWidth() / 2 - 25,
            getHeight() / 2 - 25, 50, 50);

        // A random velocity in both x and y
        dx = 3 + (int)(Math.random() * 10);
        dy = 3 + (int)(Math.random() * 10);
        
        // Start running
        setFrameRate(30);
    }

    /**
     *  Draw one frame of the animation.
     */
    public void advanceOneFrame(Graphics pen)
    {
        // Move and then draw the ball
        ball.translate(dx, dy);
        pen.fillOval(ball.x, ball.y, ball.width, ball.height);

        // Check if we've encountered the edges
        if (ball.x < 0 || ball.x + ball.width >= getWidth())
            dx = -dx;
        if (ball.y < 0 || ball.y + ball.height >= getHeight())
            dy = -dy;
    }
}

