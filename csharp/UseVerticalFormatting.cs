// Use Vertical Formatting
// You should read your code from top to bottom.
// You should read your code without "jumping" over functions.
// Similar and dependent functions should be close vertically.

using System;

public class UseVerticalFormatting
{
    // Before
    public class CalculatorBefore
    {
        public int Add(int a, int b)
        {
            return a + b;
        }

        public int Multiply(int a, int b)
        {
            return a * b;
        }

        public int[] Calculate(int a, int b)
        {
            int sumResult = Add(a, b);
            int difference = Subtract(a, b);
            int product = Multiply(a, b);
            int quotient = Divide(a, b);
            return new int[] { sumResult, difference, product, quotient };
        }

        public int Divide(int a, int b)
        {
            return a / b;
        }

        public int Subtract(int a, int b)
        {
            return a - b;
        }
    }

    // After
    public class Calculator
    {
        public int[] Calculate(int a, int b)
        {
            int sumResult = Add(a, b);
            int difference = Subtract(a, b);
            int product = Multiply(a, b);
            int quotient = Divide(a, b);
            return new int[] { sumResult, difference, product, quotient };
        }

        public int Add(int a, int b)
        {
            return a + b;
        }

        public int Subtract(int a, int b)
        {
            return a - b;
        }

        public int Multiply(int a, int b)
        {
            return a * b;
        }

        public int Divide(int a, int b)
        {
            return a / b;
        }
    }

    public static void Main(string[] args)
    {
        var calculatorBefore = new CalculatorBefore();
        int[] resultBefore = calculatorBefore.Calculate(10, 5);
        Console.WriteLine($"[{string.Join(", ", resultBefore)}]"); // [15, 5, 50, 2]

        Console.WriteLine();

        var calculator = new Calculator();
        int[] result = calculator.Calculate(10, 5);
        Console.WriteLine($"[{string.Join(", ", result)}]"); // [15, 5, 50, 2]
    }
}
