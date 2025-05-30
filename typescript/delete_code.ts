// Delete Code > Create Code
// Prefer to delete code rather than create code.
// Sometimes even new features can be created by deleting code.

// Before
class NotificationService {
  sendNotification(user: User, message: string): void {
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

  private _sendEmail(email: string, message: string): void {
    // Code to send email
    console.log(`Email sent to ${email}: ${message}`);
  }

  private _sendSms(phoneNumber: string, message: string): void {
    // Code to send SMS
    console.log(`SMS sent to ${phoneNumber}: ${message}`);
  }
}

class User {
  name: string;
  email: string;
  phoneNumber: string;
  emailNotificationsEnabled: boolean = false;
  smsNotificationsEnabled: boolean = false;

  constructor(name: string, email: string, phoneNumber: string) {
    this.name = name;
    this.email = email;
    this.phoneNumber = phoneNumber;
  }
}

// Usage
const user = new User("Alice", "alice@example.com", "123-456-7890");
user.emailNotificationsEnabled = true;
user.smsNotificationsEnabled = true;
const service = new NotificationService();
service.sendNotification(user, "Your order has been shipped.");


// After
class NotificationService {
  sendNotification(user: User, message: string): void {
    this._sendEmail(user.email, message);
    this._sendSms(user.phoneNumber, message);
  }

  private _sendEmail(email: string, message: string): void {
    // Code to send email
    console.log(`Email sent to ${email}: ${message}`);
  }

  private _sendSms(phoneNumber: string, message: string): void {
    // Code to send SMS
    console.log(`SMS sent to ${phoneNumber}: ${message}`);
  }
}

class User {
  name: string;
  email: string;
  phoneNumber: string;

  constructor(name: string, email: string, phoneNumber: string) {
    this.name = name;
    this.email = email;
    this.phoneNumber = phoneNumber;
  }
}

// Usage
const user = new User("Alice", "alice@example.com", "123-456-7890");
const service = new NotificationService();
service.sendNotification(user, "Your order has been shipped.");
