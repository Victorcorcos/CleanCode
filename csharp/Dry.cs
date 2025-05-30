// DRY (Don't Repeat Yourself)
// If a piece of code is identical or very similar to another, try to extract it into a generalized function

using System;

public class Dry
{
    // Before
    public static void GreetMorning()
    {
        Console.WriteLine("Good morning, Alice!");
    }

    public static void GreetAfternoon()
    {
        Console.WriteLine("Good afternoon, Alice!");
    }

    public static void GreetEvening()
    {
        Console.WriteLine("Good evening, Alice!");
    }

    // After
    public static void Greet(string dayPeriod, string name)
    {
        Console.WriteLine($"Good {dayPeriod}, {name}!");
    }

    public static void Main(string[] args)
    {
        // Before usage
        GreetMorning();
        GreetAfternoon();
        GreetEvening();

        Console.WriteLine();

        // After usage
        Greet("morning", "Alice");
        Greet("afternoon", "Alice");
        Greet("evening", "Alice");
    }
}
