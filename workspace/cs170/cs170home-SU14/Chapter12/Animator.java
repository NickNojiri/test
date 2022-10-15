import java.applet.*;
import java.awt.*;
import java.awt.event.*;

/**
 *  An class that allows simple double-buffered animation.
 *
 *  @author Stephen Gilbert
 *  @version Fall 2010
 */
public class Animator extends Applet
    implements ComponentListener,
    MouseListener, MouseMotionListener
{
    // Double-buffering variables
    private Image canvas;       // The off-screen canvas
    private Graphics pen; // The off-screen pen

    // Frames (per second) to display
    private static int FRAME_RATE = 0;

    protected int getFrameRate()
    {
        return FRAME_RATE;
    }
    protected void setFrameRate(int newRate)
    {
        FRAME_RATE = newRate;
        repaint();
    }

    protected Animator()
    {
        addComponentListener(this);
        addMouseMotionListener(this);
        addMouseListener(this);
    }

    /**
     *  Advances one frame of the animation.
     */
    public void paint(Graphics g)
    {
        if (pen == null) initScreen();
        Color old = pen.getColor();
        paintBackground(pen);  // Just in case the user doesn't
        pen.setColor(old);

        // Create and draw the current frame
        advanceOneFrame(pen);                   // paint off-screen

        g.drawImage(canvas, 0, 0, null);  // render the image

        if (FRAME_RATE > 0)
        {
            // Pause for the next frame
            try
            {
                Thread.sleep(1000 / FRAME_RATE);
            }
            catch (InterruptedException e)
            { /* do nothing */
            }

            // Advance to the next frame
            repaint();
        }
    }

    /**
     *  Draw one frame of the animation.
     */
    protected void advanceOneFrame(Graphics g)
    {
        // User will paint their frame here.
    }

    /**
     * Paint the background white. User may override.
     */
    protected void paintBackground(Graphics g)
    {
        Color old = g.getColor();
        g.setColor(getBackground());
        g.fillRect(0, 0, getWidth(), getHeight());
        g.setColor(old);
    }

    /**
     * Methods to handle resizing and updating.
     * This is boilerplate code and should not be changed.
     */
    public void update(Graphics g) { paint(g); }

    public void mouseClicked(MouseEvent e) {}
    public void mousePressed(MouseEvent e) {}
    public void mouseReleased(MouseEvent e) {}
    public void mouseEntered(MouseEvent e) {}
    public void mouseExited(MouseEvent e) {}
    public void mouseMoved(MouseEvent e) {}
    public void mouseDragged(MouseEvent e){}
    public void componentHidden(ComponentEvent e) { }
    public void componentMoved(ComponentEvent e) { }
    public void componentShown(ComponentEvent e) { initScreen(); }
    public void componentResized(ComponentEvent e) { initScreen(); }
    public void initScreen()
    {
        canvas = createImage(getWidth(), getHeight());
        if (canvas != null) pen = canvas.getGraphics();
    }
}

