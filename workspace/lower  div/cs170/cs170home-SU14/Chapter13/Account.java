/**
    Account.java is a sample problem for CS 170.

    A bank account class with methods to deposit to,
    withdraw from, change the name on, and get a
    String representation of the account.

    @author <Your name goes here>
    @version <Put today's date here>

*/
public class Account
{
    private double balance;
    private String name;
    private long acctNum;

    /**
     * Constructor
     * @param initBal initial balance
     * @param owner account owner
     * @param number account number
     */
    public Account(double initBal, String owner, long number)
    {
        balance = initBal;
        name = owner;
        acctNum = number;
    }

    /**
     * Checks to see if balance is sufficient for withdrawal.
     * If so, decrements balance by amount; if not, prints message.
     * @param amount amount to withdraw
     */
    public void withdraw(double amount)
    {
        if (balance >= amount)
            balance -= amount;
        else
            System.out.println("Insufficient funds");
    }

    /**
     * Adds deposit amount to balance.
     * @param amount
     */
    public void deposit(double amount)
    {
        balance += amount;
    }

    /**
     * @return account balance
     */
    public double getBalance()
    {
        return balance;
    }

    /*
     * Returns a string containing the name, account number, and balance.
     * (non-Javadoc)
     * @see java.lang.Object#toString()
     */
    public String toString()
    {
    	return "Name: " + name + "\nAccount Number: " +
    			acctNum + "\nBalance: " + balance;
    }
}
