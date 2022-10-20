import java.util.Scanner;
public class Pascal {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);//creates scanner to read inputs
    System.out.println("Enter the number of rows to print: ");
    int rows = scanner.nextInt();//stores the number of rows the user wants to print of pascal's triangle
    System.out.println("Pascal's Triangle:");
    triangle(rows);//calls the triangle method to print out the triangle
  }

  public static void triangle(int r) { //class is used to print out a row of the triangle
    for (int i = 0; i < r; i++) { //loop used to print out each individual row
      for (int j = 0; j <= i; j++) { //loop calls the pascal method over and over, each time adding a new number to the row 
        System.out.print(pascal(i, j) + " ");
      }
      System.out.println();
    }
  }

  public static int pascal(int i, int j) {//pascal method is used to find the numbers within a row
    if (j == 0 || j == i) {//this if statement makes sure that the first and the last numbers of each row will be 1
      return 1;
    } else {//recursion of the row number values until it hits the end of the row, where the number is 1
      return pascal(i - 1, j - 1) + pascal(i - 1, j);
    }
  }
}
