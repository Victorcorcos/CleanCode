// Avoid Comments
// Prefer to avoid comments rather than to write them
// If a comment is truly necessary, explain the "why" not the "what".

using System;

public class AvoidComments
{
    // Before
    public class CalculatorBefore
    {
        public double CalculateArea(double radius)
        {
            // Calculate the area of a circle
            double area = Math.PI * radius * radius;

            // Round the area to two decimal places
            area = Math.Round(area, 2);

            return area;
        }
    }

    // After
    public class Calculator
    {
        public double CalculateArea(double radius)
        {
            double area = CircleArea(radius);
            return Math.Round(area, 2);
        }

        private double CircleArea(double radius)
        {
            return Math.PI * radius * radius;
        }
    }

    public static void Main(string[] args)
    {
        var calculatorBefore = new CalculatorBefore();
        Console.WriteLine(calculatorBefore.CalculateArea(5)); // Outputs: 78.54

        Console.WriteLine();

        var calculator = new Calculator();
        Console.WriteLine(calculator.CalculateArea(5)); // Outputs: 78.54
    }
}
