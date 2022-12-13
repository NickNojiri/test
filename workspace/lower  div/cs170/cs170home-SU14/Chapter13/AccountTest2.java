import java.util.Scanner;
/**
    Test the Account class for overloaded methods lecture.
    
    @author (Your name goes here)
    @version (Put today's date here)
*/

public class AccountTest2
{
    /**
     * Start the program here.
     * @param args command-line arguments.
     */
    public static void main(String[] args)
    {
        String name;
        double balance;
        long acctNum;
        Account acct;
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter account holder's first name");
        name = scan.next();
        acct = new Account(name);
        System.out.println("Account for " + name + ":");
        System.out.println(acct);

        System.out.println("\nEnter initial balance");
        balance = scan.nextDouble();
        acct = new Account(balance, name);
        System.out.println("Account for " + name + ":");
        System.out.println(acct);

        System.out.println("\nEnter account number");
        acctNum = scan.nextLong();
        acct = new Account(balance, name, acctNum);
        System.out.println("Account for " + name + ":");
        System.out.println(acct);

        System.out.print("\nDepositing 100 into account, balance is now ");
        acct.deposit(100);
        System.out.println(acct.getBalance());

        System.out.print("\nWithdrawing $25, balance is now ");
        acct.withdraw(25);
        System.out.println(acct.getBalance());

        System.out.print("\nWithdrawing $25 with $2 fee, balance is now ");
        acct.withdraw(25, 2);
        System.out.println(acct.getBalance());

        System.out.println("\nBye!");
    }
}
