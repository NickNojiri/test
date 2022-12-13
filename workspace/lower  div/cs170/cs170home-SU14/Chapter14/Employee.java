/**
 *  CS 170 Practice problem.
 *
 *  @author Stephen Gilbert
 *  @version Fall 2012
 */
public class Employee
{
    private String name;
    private double salary;

    protected Employee() {}
    /**
     * Initializes the employee.
     * @param name the employee name.
     * @param initialSalary the starting salary.
     */
    public Employee(String name, double salary)
    {
        this.name = name;   // assign parameters to fields
        this.salary = salary;
    }

    /**
     * Returns the name.
     * @return the name.
     */
    public String getName()
    {
        return name;
    }

    /**
     * Returns the salary.
     * @return the salary.
     */
    public double getSalary()
    {
        return salary;
    }

    /**
     * Raises the salary by a percentage.
     * @param byPercent the percentage to use (10 -> 10%)
     */
    public void raiseSalary(double byPercent)
    {
        this.salary = salary + salary * byPercent / 100.0;
    }
}














