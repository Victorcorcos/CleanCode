// Good Nomenclatures
// Use descriptive variable names that reveal intent.
// Use pronounceable and easily searchable names.
// Use conventions (related to the language, the business, and the organization/team's communication).

using System;

public class GoodNomenclatures
{
    // Before
    public static int Fact(int n)
    {
        if (n <= 1)
        {
            return 1;
        }
        else
        {
            return n * Fact(n - 1);
        }
    }

    // After
    public static int Factorial(int number)
    {
        if (number <= 1)
        {
            return 1;
        }
        else
        {
            return number * Factorial(number - 1);
        }
    }

    public static void Main(string[] args)
    {
        // Before
        int x = 5;
        int y = Fact(x);
        Console.WriteLine(y); // Outputs: 120

        Console.WriteLine();

        // After
        int number = 5;
        int result = Factorial(number);
        Console.WriteLine(result); // Outputs: 120
    }
}
