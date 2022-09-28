/** CS 170 Example
*
*  Put the array code in a try block and
*  catches the array index out of bounds exception
*  if it occurs.
*
*/

public class TryCatch
{
    /**
     * Creates an array and parses some values.
     * @param args
     */
    public static void main(String [] args)
    {
        int value;
        int [] ar = {5,6,7};
        int index = Integer.parseInt(args[0]);
        // int index = System.in.read();
        value = ar[index];
        System.out.printf("ar[%d] = %d%n", index, value);
    }
}
