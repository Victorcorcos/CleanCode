// YAGNI (You Ain't Gonna Need It)
// Don't build a cannon to kill a fly; you might not even need it afterward.

using System;

public class Yagni
{
    // Before
    public class UserBefore
    {
        public string Name { get; set; }
        public string Email { get; set; }
        public int? Age { get; set; }  // Unused feature
        public string Address { get; set; }  // Unused feature
        public string PhoneNumber { get; set; }  // Unused feature

        public UserBefore(string name, string email)
        {
            Name = name;
            Email = email;
            Age = null;
            Address = null;
            PhoneNumber = null;
        }

        public void SendWelcomeEmail()
        {
            Console.WriteLine($"Welcome, {Name}! A welcome email has been sent to {Email}.");
        }
    }

    // After
    public class User
    {
        public string Name { get; set; }
        public string Email { get; set; }

        public User(string name, string email)
        {
            Name = name;
            Email = email;
        }

        public void SendWelcomeEmail()
        {
            Console.WriteLine($"Welcome, {Name}! A welcome email has been sent to {Email}.");
        }
    }

    public static void Main(string[] args)
    {
        var userBefore = new UserBefore("Alice", "alice@example.com");
        userBefore.SendWelcomeEmail();

        Console.WriteLine();

        var user = new User("Alice", "alice@example.com");
        user.SendWelcomeEmail();
    }
}
