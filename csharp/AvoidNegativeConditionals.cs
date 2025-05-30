// Avoid Negative Conditionals
// Positive conditionals reduce mental strain and make it easier to reason about the code.

using System;

public class AvoidNegativeConditionals
{
    public class User
    {
        private bool isAdmin = false;
        private bool isPremium = false;

        public bool Admin()
        {
            return isAdmin;
        }

        public bool PremiumMember()
        {
            return isPremium;
        }
    }

    // Before
    public static void CheckAccessBefore(User user)
    {
        if (!user.Admin())
        {
            if (!user.PremiumMember())
            {
                Console.WriteLine("Access denied.");
            }
            else
            {
                Console.WriteLine("Access granted.");
            }
        }
        else
        {
            Console.WriteLine("Access granted.");
        }
    }

    // After
    public static void CheckAccess(User user)
    {
        if (user.Admin() || user.PremiumMember())
        {
            Console.WriteLine("Access granted.");
        }
        else
        {
            Console.WriteLine("Access denied.");
        }
    }

    public static void Main(string[] args)
    {
        var user = new User();
        
        CheckAccessBefore(user);
        Console.WriteLine();
        CheckAccess(user);
    }
}
