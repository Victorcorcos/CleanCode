// Delete Code > Create Code
// Prefer to delete code rather than create code.
// Sometimes even new features can be created by deleting code.

// Before
class NotificationServiceBefore {
  void sendNotification(UserBefore user, String message) {
    if (user.emailNotificationsEnabled) {
      _sendEmail(user.email, message);
    } else {
      print("Email notifications are disabled for ${user.name}.");
    }

    if (user.smsNotificationsEnabled) {
      _sendSms(user.phoneNumber, message);
    } else {
      print("SMS notifications are disabled for ${user.name}.");
    }
  }

  void _sendEmail(String email, String message) {
    // Code to send email
    print("Email sent to $email: $message");
  }

  void _sendSms(String phoneNumber, String message) {
    // Code to send SMS
    print("SMS sent to $phoneNumber: $message");
  }
}

class UserBefore {
  String name;
  String email;
  String phoneNumber;
  bool emailNotificationsEnabled = false;
  bool smsNotificationsEnabled = false;

  UserBefore(this.name, this.email, this.phoneNumber);
}

// After
class NotificationService {
  void sendNotification(User user, String message) {
    _sendEmail(user.email, message);
    _sendSms(user.phoneNumber, message);
  }

  void _sendEmail(String email, String message) {
    // Code to send email
    print("Email sent to $email: $message");
  }

  void _sendSms(String phoneNumber, String message) {
    // Code to send SMS
    print("SMS sent to $phoneNumber: $message");
  }
}

class User {
  String name;
  String email;
  String phoneNumber;

  User(this.name, this.email, this.phoneNumber);
}

void main() {
  // Before usage
  var userBefore = UserBefore("Alice", "alice@example.com", "123-456-7890");
  userBefore.emailNotificationsEnabled = true;
  userBefore.smsNotificationsEnabled = true;
  var serviceBefore = NotificationServiceBefore();
  serviceBefore.sendNotification(userBefore, "Your order has been shipped.");

  print("");

  // After usage
  var user = User("Alice", "alice@example.com", "123-456-7890");
  var service = NotificationService();
  service.sendNotification(user, "Your order has been shipped.");
}
