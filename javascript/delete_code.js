// Delete Code > Create Code
// Prefer to delete code rather than create code.
// Sometimes even new features can be created by deleting code.

// Before
class NotificationService {
  sendNotification(user, message) {
    if (user.emailNotificationsEnabled) {
      this._sendEmail(user.email, message);
    } else {
      console.log(`Email notifications are disabled for ${user.name}.`);
    }

    if (user.smsNotificationsEnabled) {
      this._sendSms(user.phoneNumber, message);
    } else {
      console.log(`SMS notifications are disabled for ${user.name}.`);
    }
  }

  _sendEmail(email, message) {
    // Code to send email
    console.log(`Email sent to ${email}: ${message}`);
  }

  _sendSms(phoneNumber, message) {
    // Code to send SMS
    console.log(`SMS sent to ${phoneNumber}: ${message}`);
  }
}

class User {
  constructor(name, email, phoneNumber) {
    this.name = name;
    this.email = email;
    this.phoneNumber = phoneNumber;
    this.emailNotificationsEnabled = false;
    this.smsNotificationsEnabled = false;
  }
}

// Usage
const user =  new User("Alice", "alice@example.com", "123-456-7890");
user.emailNotificationsEnabled = true;
user.smsNotificationsEnabled = true;
const service = new NotificationService();
service.sendNotification(user, "Your order has been shipped.");


// After
class NotificationService {
  sendNotification(user, message) {
    this._sendEmail(user.email, message);
    this._sendSms(user.phoneNumber, message);
  }

  _sendEmail(email, message) {
    // Code to send email
    console.log(`Email sent to ${email}: ${message}`);
  }

  _sendSms(phoneNumber, message) {
    // Code to send SMS
    console.log(`SMS sent to ${phoneNumber}: ${message}`);
  }
}

class User {
  constructor(name, email, phoneNumber) {
    this.name = name;
    this.email = email;
    this.phoneNumber = phoneNumber;
  }
}

// Usage
const user = new User("Alice", "alice@example.com", "123-456-7890");
const service = new NotificationService();
service.sendNotification(user, "Your order has been shipped.");
