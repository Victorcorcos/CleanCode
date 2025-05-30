// Avoid Flag Arguments
// Avoid providing boolean arguments (true/false) to functions or methods.
// You could pass a string with a clearer name (for example).

using System;

public class AvoidFlagArguments
{
    // Before
    public static void GreetBefore(string name, bool formal)
    {
        if (formal)
        {
            Console.WriteLine($"Good evening, {name}.");
        }
        else
        {
            Console.WriteLine($"Hi, {name}!");
        }
    }

    // After
    public static void Greet(string name, string formality)
    {
        if (formality == "formal")
        {
            Console.WriteLine($"Good evening, {name}.");
        }
        else if (formality == "informal")
        {
            Console.WriteLine($"Hi, {name}!");
        }
    }

    public static void Main(string[] args)
    {
        GreetBefore("Alice", true);
        GreetBefore("Bob", false);

        Console.WriteLine();

        Greet("Alice", "formal");
        Greet("Bob", "informal");
    }
}
