import javax.swing.*;
/**
 * My First GUI program for CS 170.
 * 
 * @author Nicholas nojiri
 * @version August 29, 2014
 */
public class MyFirstGUIProgram
{
    private String studentName;
    
    /**
     * Create the GUI program
     * @param name the greeter's name
     */
    public MyFirstGUIProgram(String name)
    {
        studentName = name;
    }
    
    /**
     * Display the message.
     */
    public void show()
    {
        String message = "Hello, I love you. " +
        "Won't you tell me your name?\n" +
        "My name is " + studentName + ", by the way.";
        
        JOptionPane.showMessageDialog(null, message,
            "Greetings from " + studentName,
            JOptionPane.QUESTION_MESSAGE);
    }
    
    /**
     * Create a window and display it.
     * @param args the command line.
     */
    public static void main(String[] args)
    {
        MyFirstGUIProgram app = new MyFirstGUIProgram("Nicholas nojiri");
        app.show();
    }
}
 