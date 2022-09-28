import javax.swing.*;
import cs170.ponglib.*;

import java.awt.*;
import java.awt.event.*;
import java.util.*;

public class PongCanvas 
    extends JPanel
    implements KeyListener {
 
    private int width;
    private int height;

    private PongBall ball;
    private PongPaddle paddle1, paddle2;
    private PongScore player1, player2;

    private java.util.Timer gameTimer;

    public PongCanvas (int w, int h) {
        this.width = w;
        this.height = h;

        ball = new PongBall(width/2, (height-40)/2 + 5, 3, 4);

        paddle1 = new PongPaddle((height - 40)/2 - 20,25, 10,50);
        paddle2 = new PongPaddle((height - 40)/2 - 20,width-35,10,50);
        
        //paddle1 = new PongPaddle(25,(height - 40)/2 - 20,10,50);
        //paddle2 = new PongPaddle(width-35, (height - 40)/2 - 20,10,50);

        player1 = new PongScore();
        player2 = new PongScore();

        gameTimer = new java.util.Timer();

        this.addKeyListener(this);
    }
    
    // NOTE: This method is for JDK1.4 or newer and replaces
    // the depricated isFocusTraversable defined below.  WHen
    // compling with JDK1.4 or newer it is recommended that
    // isFocusTraversable be removed.
    public boolean isFocusable() {
        return true;
    }


    /**
     * Return the width and height of this PongCanvas
     * as its preferred, minimum and maximum sizes.
     *
     * @return a new Dimension object specifying the width
     *         and height of this PongCanvas.
     */
    public Dimension getPreferredSize() {
        return new Dimension(width, height);
    }

    /**
     * Return the width and height of this PongCanvas
     * as its preferred, minimum and maximum sizes.
     *
     * @return a new Dimension object specifying the width
     *         and height of this PongCanvas.
     */
    public Dimension getMinimumSize() {
        return new Dimension(width, height);
    }

    /**
     * Return the width and height of this PongCanvas
     * as its preferred, minimum and maximum sizes.
     *
     * @return a new Dimension object specifying the width
     *         and height of this PongCanvas.
     */
    public Dimension getMaximumSize() {
        return new Dimension(width, height);
    }

    /**
     * Paint the screen.
     */
    public void paintComponent(Graphics g) {
        super.paintComponent(g);

        g.setColor(Color.red);
        g.fillOval(ball.getX()-4,ball.getY()-4,8,8);

        g.setColor(Color.blue);
        g.fillRect(paddle1.getLeftX(),
                   paddle1.getTopY(),
                   paddle1.getRightX() - paddle1.getLeftX(),
                   paddle1.getBottomY() - paddle1.getTopY());

        g.setColor(Color.green.darker());
        g.fillRect(paddle2.getLeftX(),
                   paddle2.getTopY(),
                   paddle2.getRightX() - paddle2.getLeftX(),
                   paddle2.getBottomY() - paddle2.getTopY());
    }
    
    /**
     * Paint the border.
     */
    public void paintBorder(Graphics g) {
        g.setColor(Color.black);
        g.drawRect(5,5,width-11,height-35);
        
        g.drawLine(5,(height-30)/2 - 15,15,(height-30)/2 - 15);
        g.drawLine(5,(height-30)/2 + 15,15,(height-30)/2 + 15);
        g.drawString("5", 9 ,(height-30)/2 + 5);
        g.drawLine(5,(height-30)/2 - 45,15,(height-30)/2 - 45);
        g.drawLine(5,(height-30)/2 + 45,15,(height-30)/2 + 45);
        g.drawString("3", 9 ,(height-30)/2 + 5 - 30);
        g.drawString("3", 9 ,(height-30)/2 + 5 + 30);
        g.drawString("1", 9 ,(height-30)/2 + 5 - 65);
        g.drawString("1", 9 ,(height-30)/2 + 5 + 65);

        g.drawLine(width-19,(height-30)/2 - 15,width-6,(height-30)/2 - 15);
        g.drawLine(width-19,(height-30)/2 + 15,width-6,(height-30)/2 + 15);
        g.drawString("5", width-15 ,(height-30)/2 + 5);
        g.drawLine(width-19,(height-30)/2 - 45,width-6,(height-30)/2 - 45);
        g.drawLine(width-19,(height-30)/2 + 45,width-6,(height-30)/2 + 45);
        g.drawString("3", width-15 ,(height-30)/2 + 5 - 30);
        g.drawString("3", width-15 ,(height-30)/2 + 5 + 30);
        g.drawString("1", width-15 ,(height-30)/2 + 5 - 65);
        g.drawString("1", width-15 ,(height-30)/2 + 5 + 65);

        g.setColor(Color.blue);
        g.drawString("Blue: " + player1.getScore(), 
                     15, height-10);

        g.setColor(Color.green.darker());
        g.drawString("Green: " + player2.getScore(), 
                     width-75, height-10);
        
    }

    public int getHeight() { return this.height; }
    public int getWidth() { return this.width; }
    
    private int leftPaddle = 0;
    private int rightPaddle = 0;
    
    protected boolean leftUp() { return leftPaddle == -1; }
    protected boolean leftDown() { return leftPaddle == 1; }
    protected boolean rightUp() { return rightPaddle == -1; }
    protected boolean rightDown() { return rightPaddle == 1; }
    
    public void keyPressed(KeyEvent e) {

        switch (e.getKeyCode())
        {
            case KeyEvent.VK_A: leftPaddle = -1; break;
            case KeyEvent.VK_Z: leftPaddle = 1; break;
            case KeyEvent.VK_K: rightPaddle = -1; break;
            case KeyEvent.VK_M: rightPaddle = 1; break;
        }
    }
    
    public void keyReleased(KeyEvent e) {

        switch (e.getKeyCode())
        {
            case KeyEvent.VK_A: leftPaddle = 0; break;
            case KeyEvent.VK_Z: leftPaddle = 0; break;
            case KeyEvent.VK_K: rightPaddle = 0; break;
            case KeyEvent.VK_M: rightPaddle = 0; break;
        }
    }
    
    public void keyTyped(KeyEvent e) {

        if (e.getKeyChar() == 'b' ||
                 e.getKeyChar() == 'B') {
            gameTimer.scheduleAtFixedRate(
                new PongTimer(ball,this,
                              paddle1,
                              paddle2,
                              player1,
                              player2),
                              0, 10);
        }

    }
}
