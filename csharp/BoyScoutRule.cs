// Boy Scout Rule
// Always leave the campsite cleaner than you found it.
// Take the time to apply Clean Code principles to small parts of the code as you program.
// Over time, you will find the codebase much cleaner than when you found it!

using System;
using System.Collections.Generic;

public class BoyScoutRule
{
    // Before
    public static void PrintUserInfoBefore(Dictionary<string, object> user)
    {
        Console.WriteLine("Name: " + user["name"]);
        Console.WriteLine("Email: " + user["email"]);
        if (user["age"] != null)
        {
            Console.WriteLine("Age: " + user["age"].ToString());
        }
    }

    // After
    public static void PrintUserInfo(Dictionary<string, object> user)
    {
        Console.WriteLine($"Name: {user["name"]}");
        Console.WriteLine($"Email: {user["email"]}");
        if (user["age"] != null)
        {
            Console.WriteLine($"Age: {user["age"]}");
        }
    }

    public static void Main(string[] args)
    {
        var user = new Dictionary<string, object>
        {
            ["name"] = "Alice",
            ["email"] = "alice@example.com",
            ["age"] = 30
        };

        PrintUserInfoBefore(user);
        Console.WriteLine();
        PrintUserInfo(user);
    }
}
