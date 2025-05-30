// Delete Code > Create Code
// Prefer to delete code rather than create code.
// Sometimes even new features can be created by deleting code.

public class DeleteCode {
    // Before
    static class NotificationServiceBefore {
        public void sendNotification(UserBefore user, String message) {
            if (user.emailNotificationsEnabled) {
                sendEmail(user.email, message);
            } else {
                System.out.println("Email notifications are disabled for " + user.name + ".");
            }

            if (user.smsNotificationsEnabled) {
                sendSms(user.phoneNumber, message);
            } else {
                System.out.println("SMS notifications are disabled for " + user.name + ".");
            }
        }

        private void sendEmail(String email, String message) {
            // Code to send email
            System.out.println("Email sent to " + email + ": " + message);
        }

        private void sendSms(String phoneNumber, String message) {
            // Code to send SMS
            System.out.println("SMS sent to " + phoneNumber + ": " + message);
        }
    }

    static class UserBefore {
        public String name;
        public String email;
        public String phoneNumber;
        public boolean emailNotificationsEnabled = false;
        public boolean smsNotificationsEnabled = false;

        public UserBefore(String name, String email, String phoneNumber) {
            this.name = name;
            this.email = email;
            this.phoneNumber = phoneNumber;
        }
    }

    // After
    static class NotificationService {
        public void sendNotification(User user, String message) {
            sendEmail(user.email, message);
            sendSms(user.phoneNumber, message);
        }

        private void sendEmail(String email, String message) {
            // Code to send email
            System.out.println("Email sent to " + email + ": " + message);
        }

        private void sendSms(String phoneNumber, String message) {
            // Code to send SMS
            System.out.println("SMS sent to " + phoneNumber + ": " + message);
        }
    }

    static class User {
        public String name;
        public String email;
        public String phoneNumber;

        public User(String name, String email, String phoneNumber) {
            this.name = name;
            this.email = email;
            this.phoneNumber = phoneNumber;
        }
    }

    public static void main(String[] args) {
        // Before usage
        UserBefore userBefore = new UserBefore("Alice", "alice@example.com", "123-456-7890");
        userBefore.emailNotificationsEnabled = true;
        userBefore.smsNotificationsEnabled = true;
        NotificationServiceBefore serviceBefore = new NotificationServiceBefore();
        serviceBefore.sendNotification(userBefore, "Your order has been shipped.");

        System.out.println();

        // After usage
        User user = new User("Alice", "alice@example.com", "123-456-7890");
        NotificationService service = new NotificationService();
        service.sendNotification(user, "Your order has been shipped.");
    }
}
