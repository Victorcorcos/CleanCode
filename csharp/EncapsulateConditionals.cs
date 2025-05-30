// Encapsulate Conditionals
// Extract complex conditionals into functions that convey the intent of the condition.
// Create names that reveal the intent of the conditional.

using System;

public class EncapsulateConditionals
{
    public class User
    {
        public int Age { get; set; } = 25;
        private bool children = false;
        private bool isPremium = false;
        private bool coupon = false;

        public bool HasChildren()
        {
            return children;
        }

        public bool PremiumMember()
        {
            return isPremium;
        }

        public bool HasCoupon()
        {
            return coupon;
        }
    }

    // Before
    public static void CheckAvailabilityBefore(User user)
    {
        if (user.Age > 18 && !user.HasChildren() && (user.PremiumMember() || user.HasCoupon()))
        {
            Console.WriteLine("User is available for the offer.");
        }
        else
        {
            Console.WriteLine("User is not available for the offer.");
        }
    }

    // After
    public static void CheckAvailability(User user)
    {
        if (IsAvailable(user))
        {
            Console.WriteLine("User is available for the offer.");
        }
        else
        {
            Console.WriteLine("User is not available for the offer.");
        }
    }

    private static bool IsAvailable(User user)
    {
        if (user.Age <= 18)
        {
            return false;
        }
        if (user.HasChildren())
        {
            return false;
        }
        if (user.PremiumMember())
        {
            return true;
        }
        if (user.HasCoupon())
        {
            return true;
        }
        return false;
    }

    public static void Main(string[] args)
    {
        var user = new User();
        
        CheckAvailabilityBefore(user);
        Console.WriteLine();
        CheckAvailability(user);
    }
}
