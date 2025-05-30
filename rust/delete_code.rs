// Delete Code > Create Code
// Prefer to delete code rather than create code.
// Sometimes even new features can be created by deleting code.

// Before
struct NotificationServiceBefore;

impl NotificationServiceBefore {
    fn send_notification(&self, user: &UserBefore, message: &str) {
        if user.email_notifications_enabled {
            self.send_email(&user.email, message);
        } else {
            println!("Email notifications are disabled for {}.", user.name);
        }

        if user.sms_notifications_enabled {
            self.send_sms(&user.phone_number, message);
        } else {
            println!("SMS notifications are disabled for {}.", user.name);
        }
    }

    fn send_email(&self, email: &str, message: &str) {
        // Code to send email
        println!("Email sent to {}: {}", email, message);
    }

    fn send_sms(&self, phone_number: &str, message: &str) {
        // Code to send SMS
        println!("SMS sent to {}: {}", phone_number, message);
    }
}

struct UserBefore {
    name: String,
    email: String,
    phone_number: String,
    email_notifications_enabled: bool,
    sms_notifications_enabled: bool,
}

impl UserBefore {
    fn new(name: String, email: String, phone_number: String) -> Self {
        UserBefore {
            name,
            email,
            phone_number,
            email_notifications_enabled: false,
            sms_notifications_enabled: false,
        }
    }
}

// After
struct NotificationService;

impl NotificationService {
    fn send_notification(&self, user: &User, message: &str) {
        self.send_email(&user.email, message);
        self.send_sms(&user.phone_number, message);
    }

    fn send_email(&self, email: &str, message: &str) {
        // Code to send email
        println!("Email sent to {}: {}", email, message);
    }

    fn send_sms(&self, phone_number: &str, message: &str) {
        // Code to send SMS
        println!("SMS sent to {}: {}", phone_number, message);
    }
}

struct User {
    name: String,
    email: String,
    phone_number: String,
}

impl User {
    fn new(name: String, email: String, phone_number: String) -> Self {
        User {
            name,
            email,
            phone_number,
        }
    }
}

fn main() {
    // Before usage
    let mut user_before = UserBefore::new(
        "Alice".to_string(),
        "alice@example.com".to_string(),
        "123-456-7890".to_string(),
    );
    user_before.email_notifications_enabled = true;
    user_before.sms_notifications_enabled = true;
    let service_before = NotificationServiceBefore;
    service_before.send_notification(&user_before, "Your order has been shipped.");

    println!();

    // After usage
    let user = User::new(
        "Alice".to_string(),
        "alice@example.com".to_string(),
        "123-456-7890".to_string(),
    );
    let service = NotificationService;
    service.send_notification(&user, "Your order has been shipped.");
}
