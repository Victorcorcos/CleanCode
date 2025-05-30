// Delete Code > Create Code
// Prefer to delete code rather than create code.
// Sometimes even new features can be created by deleting code.

using System;

public class DeleteCode
{
    // Before
    public class NotificationServiceBefore
    {
        public void SendNotification(UserBefore user, string message)
        {
            if (user.EmailNotificationsEnabled)
            {
                SendEmail(user.Email, message);
            }
            else
            {
                Console.WriteLine($"Email notifications are disabled for {user.Name}.");
            }

            if (user.SmsNotificationsEnabled)
            {
                SendSms(user.PhoneNumber, message);
            }
            else
            {
                Console.WriteLine($"SMS notifications are disabled for {user.Name}.");
            }
        }

        private void SendEmail(string email, string message)
        {
            // Code to send email
            Console.WriteLine($"Email sent to {email}: {message}");
        }

        private void SendSms(string phoneNumber, string message)
        {
            // Code to send SMS
            Console.WriteLine($"SMS sent to {phoneNumber}: {message}");
        }
    }

    public class UserBefore
    {
        public string Name { get; set; }
        public string Email { get; set; }
        public string PhoneNumber { get; set; }
        public bool EmailNotificationsEnabled { get; set; } = false;
        public bool SmsNotificationsEnabled { get; set; } = false;

        public UserBefore(string name, string email, string phoneNumber)
        {
            Name = name;
            Email = email;
            PhoneNumber = phoneNumber;
        }
    }

    // After
    public class NotificationService
    {
        public void SendNotification(User user, string message)
        {
            SendEmail(user.Email, message);
            SendSms(user.PhoneNumber, message);
        }

        private void SendEmail(string email, string message)
        {
            // Code to send email
            Console.WriteLine($"Email sent to {email}: {message}");
        }

        private void SendSms(string phoneNumber, string message)
        {
            // Code to send SMS
            Console.WriteLine($"SMS sent to {phoneNumber}: {message}");
        }
    }

    public class User
    {
        public string Name { get; set; }
        public string Email { get; set; }
        public string PhoneNumber { get; set; }

        public User(string name, string email, string phoneNumber)
        {
            Name = name;
            Email = email;
            PhoneNumber = phoneNumber;
        }
    }

    public static void Main(string[] args)
    {
        // Before usage
        var userBefore = new UserBefore("Alice", "alice@example.com", "123-456-7890");
        userBefore.EmailNotificationsEnabled = true;
        userBefore.SmsNotificationsEnabled = true;
        var serviceBefore = new NotificationServiceBefore();
        serviceBefore.SendNotification(userBefore, "Your order has been shipped.");

        Console.WriteLine();

        // After usage
        var user = new User("Alice", "alice@example.com", "123-456-7890");
        var service = new NotificationService();
        service.SendNotification(user, "Your order has been shipped.");
    }
}
