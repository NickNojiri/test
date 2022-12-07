/**
    AccountTest.java tests the Account class for CS 170.

    @author <Your name goes here>
    @version <Put today's date here>
*/

import java.util.Scanner;
public class AccountTest
{
    public static void main(String[] args)
    {
        Account testAcct;

        Scanner scan = new Scanner(System.in);
        System.out.println("How many accounts would you like to create?");

        int num = scan.nextInt();
        for (int i=1; i<=num; i++)
        {
            testAcct = new Account(100, "Name" + i, i);
            System.out.println("\nCreated account " + testAcct);
            System.out.println("Now there are " + 
                  Account.getNumberOfAccounts() + " accounts");
        }
    }
}
