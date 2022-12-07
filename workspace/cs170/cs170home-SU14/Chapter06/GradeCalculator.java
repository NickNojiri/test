import static java.lang.System.out;
import static java.lang.String.*;
import java.util.Scanner;
/**
 *  Calculates letter grades from a grade percentage.
 *
 *  @author Stephen Gilbert
 *  @version Fall 2010
 */
public class GradeCalculator
{
    /**
     *  A grade calculator.
     */
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);

        out.println("Grade Calculator");
        out.println("----------------");

        // 1. Read the student's name and the number of scores
        out.print("Student's name: ");
        String student = cin.nextLine();
        out.print("How many scores to record? ");
        int numScores = cin.nextInt();

        // 2. Store the total points in two variables
        double pointsPossible = 0.0;
        double pointsEarned = 0.0;

        // 3. Use a for loop to get the input from the grader
        for (int i = 1; i <= numScores; i++)
        {
            // Current exam or quiz scores
            out.print("# " + i + ": possible points: ");
            double possible = cin.nextDouble();
            out.print("# " + i + ": actual points: ");
            double earned = cin.nextDouble();

            // Add the current scores to the total
            pointsPossible += possible;
            pointsEarned += earned;
            out.println();
        }

        // 4. Calculate the results
        double percent = getPercentage(pointsPossible, pointsEarned);
        String letterGrade = getLetterGrade(percent);

        // 5. Print the results
        out.printf("%-20s: %.1f%% or %s%n",
                   student, percent, letterGrade);
    }

    /**
     * Calculate the percentage grade (like 79.25).
     * If there are no possible points,
     * then the function returns 0.
     *
     *  @param possible points that could be earned
     *  @param earned points
     *  @return percentage or 0 if 0 possible points
     */
    public static double getPercentage(double possible, double earned)
    {
        if (possible == 0)
            return 0;
        else
            return (earned / possible) * 100.0;
    }

    /**
     * Returns the letter grade based on the percentage.
     *
     *  @param percent on a scale of 0-100 (or more?)
     *  @return a letter grade (A-F)
     */
    public static String getLetterGrade(double percent)
    {
        String result = "NOT DEFINED";

        return result;
    }
}
