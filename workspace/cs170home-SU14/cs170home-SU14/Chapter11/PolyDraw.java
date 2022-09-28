import java.awt.*; 
import java.applet.*;
/**
 * Draws lines based on mouse clicks.
 * Illustrates use of parallel arrays and
 * the drawPolyLine() and drawPolygon() methods.
 */
public class PolyDraw extends Applet 
{ 
    // Parallel arrays (both same size)
    private int[] ax = new int[100]; 
    private int[] ay = new int[100]; 
    
    // Single index used to process the array
    private int size = 0;

    /**
     * Process the arrays using different techniques.
     */
    public void paint(Graphics pen) 
    { 
        // 1. Draw a loop that goes through the arrays
        // 2. Use Graphics "poly" methods to do the same thing
    }
 
    /**
     * Set the screen to white.
     */
    public void init()
    {
        setBackground(Color.WHITE);
        setForeground(Color.BLUE);
    }
    
    /**
     * Old style (Java 1.0) event handling.
     */
    public boolean mouseDown(Event e, int x, int y) 
    { 
        size %= ax.length; // wrap around
        ax[size] = x; 
        ay[size] = y; 
        size++;
        
        repaint(); 
        return true; 
    }
     
    /**
     * Skip the auto erasing feature.
     */
    public void update(Graphics pen) 
    { 
        paint(pen); 
    } 
} 