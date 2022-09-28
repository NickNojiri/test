/**
 *  OCC CS 170 - Simple TicTacToe
 *  Starter File
 */
import acm.program.*;
import acm.graphics.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class TicTacToe extends GraphicsProgram
{
    // ------------------------------------------------------------
    // 1. Create your fields
    // ------------------------------------------------------------
    //  Arrays
    //  -- A 3 x 3 array of JLabel objects. Call it grid
    //  -- A 3 x 3 array of chars. Call it game
    ///////////// YOUR CODE HERE ////////////////////////////

    
    
    
    ////////////// YOUR CODE HERE //////////////////////////

    //  Other graphical fields
    private JButton restart;  // used to restart the game
    private JLabel status;    // used to display the status

    //  Primitive variables
    //  -- an int named numClicks  (number of clicks in game)
    //  -- a boolean named isDone  (set to false)
    //  -- a boolean named isXTurn (set to true)
    private int numClicks = 0;
    private boolean isDone = false;
    private boolean isXTurn = true;

    // ------------------------------------------------------------
    // The init() method
    // ------------------------------------------------------------
    public void init()
    {
        // Add and hook up the restart button
        restart = new JButton(" Restart ");
        add(restart, SOUTH);

        // Add the status label to the top of the applet
        //    -- Set font to 14 point bold sans serif
        status = new JLabel("Welcome to TicTacToe", JLabel.CENTER);
        status.setForeground(Color.BLUE);
        status.setFont(new Font("Sansserif", Font.BOLD, 14));
        add(status, NORTH);
        add(new JLabel(""), WEST); // spacer
        add(new JLabel(""), EAST); // spacer

        // Initialize the main panel for the layout
        JPanel p = new JPanel(new GridLayout(3, 3, 3, 3));
        p.setSize(300, 300);
        p.setFont(new Font("Sansserif", Font.BOLD, 36));
        p.setBackground(Color.black);
        getGCanvas().add(p, 10, 10);

        // 2. Create and initialize your JLabel objects
        //    -- Start with a nested loop (row, col)
        //    -- Inside the inner loop of your array
        //       > Call the function createNewTile() and place
        //         in the array grid at row, col
        //       > Add it to the panel, using p.add(grid[row][col])
        //       > Put a blank in each element of your game array
        ///////////// YOUR CODE HERE ////////////////////////////

        
        ////////////// YOUR CODE ABOVE //////////////////////////
        addActionListeners();
    }

    /**
     * Creates a blank tic-tac-toe tile.
     */
    private JLabel createNewTile()
    {
        JLabel tile = new JLabel(" ", JLabel.CENTER);
        tile.setBackground(Color.WHITE);
        tile.setOpaque(true);
        tile.setFont(new Font("Impact", Font.PLAIN, 48));
        tile.addMouseListener(this);
        return tile;
    }

    // ------------------------------------------------------------
    // 3. Write the resetGame() method
    // ------------------------------------------------------------
    void resetGame()
    {
        ////////// YOUR CODE HERE ///////////////////////////////
        // a. Write a nested for loop (row, col)
        // b. For each element in grid, set text to " "
        // c. For each element in game, set value to ' '
        // d. Set numClicks to zero
        // e. Set isXTurn to true
        // f. Set the status label to X turn
        /////////////////////////////////////////////////////////

    }

    // ------------------------------------------------------------
    // 4. Handle the Game Logic
    // ------------------------------------------------------------
    public void mouseClicked(MouseEvent e)
    {
        // If the game is done, then call the reset game method
        if (isDone) resetGame();

        // Retrieve a reference to the object that was clicked
        JLabel clicked = (JLabel) e.getSource();

        // Call getClickedCoordinates(). coords[0] == row, [1] == col
        // NOTE: this is NOT written yet. Write this before running!
        int[] coords = getClickedCoordinates(clicked);

        //////////// YOUR CODE GOES HERE ////////////////////////

        // a. if text in clicked is not " " then print
        //    "Invalid Move" using status.setText() method and return

        
        // b. if text in clicked is " " and isXTurn is true then
        //  -- set the text in clicked to "X"
        //  -- set the foreground in clicked to red
        //  -- set the game[row][col] to 'X'
        //     (row and col will be in the coords[] array variable)
        
        
        // c. Otherwise
        //  -- set the text in clicked to "O"
        //  -- set the foreground to blue
        //  -- set the game[row][col] to 'O'

        
        // d. Toggle isXTurn, increment numClicks
        
        
        // Check to see if game is over after each click
        gameOver();
    }

    /**
     * 5 - Write the getClickedCoordinates method
     * Given a JLabel, return it's array coordinates
     * @param label the label to check
     * @return a 2-element int array containing its
     *         row in the first, and column in the second.
     */
    int[] getClickedCoordinates(JLabel label)
    {
        ////////////// YOUR CODE HERE ///////////////////
        // a. Create the 2-element int result array (-1, -1)
        // b. Loop through the grid with a nested loop
        //    - If the label == one of the elements, set
        //      result[0] to row and result[1] to col
        // c. Return the result.
        ////////////////////////////////////////////////
        
        return null; // replace this of course
    }

    // ------------------------------------------------------------
    // 6 - The gameOver() method [see if there is a winner]
    // ------------------------------------------------------------
    void gameOver()
    {
        char winner = ' ';

        //  Check values in array named game
        ///////////////////// YOUR CODE GOES HERE /////////////////
        // a. Check the first diagonal (upper-left to lower right)
        //    Set winner to upper-left if all are equal.

        
        // b. if no winner, then check second diagonal
        //    (lower-left to upper-right). If all three are the
        //    same then winner is lower-left corner

            
        // c. if no winner on diagonals, then check rows
        //    -- start by creating a loop for rows
        //    -- on each row check if all three columns are same
        //    -- if they are, then winner is game[i][0]
        //    -- if not, use rows to represent the columns
        //       and check if each row is the same
 
        
                
        /////////////////// YOUR CODE ABOVE ////////////////////
        // Assume game is finished
        isDone = true;

        // d. Check for tie
        if (winner == ' ' && numClicks == 9)
            status.setText("Tie Game");

        // e. Check for game done
        else if (winner != ' ')
            status.setText("Game Over: " + winner + " Won!!!");

        // f. Otherwise a continuing game
        else
        {
            status.setText((isXTurn ? "X's Turn" : "O's Turn"));
            isDone = false;
        }
    }

    // The actionPerformed() method (resets the game)
    public void actionPerformed(ActionEvent ae)
    {
        resetGame();
    }
    public static final int APPLICATION_WIDTH = 340;
    public static final int APPLICATION_HEIGHT = 405;
}
