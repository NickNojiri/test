/**
 * Inheritance exercises.
 */
public class TestStudent
{
    /**
     *  Call inherited methods.
     */
    public static void main(String[] args)
    {
        // Inherited methods
        Student steve = new Student("Steve", 1007);

        steve.setName("Stephen");
        System.out.println("getName() = " + steve.getName());
        System.out.println("getID() = " + steve.getID());


        Person pete = new Person();
        pete.setName("Pete Peterson");
        System.out.println("pete is " + pete.toString());
        System.out.println("steve is " + steve.toString());
    }

}
