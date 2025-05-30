// Delete Code > Create Code
// Prefer to delete code rather than create code.
// Sometimes even new features can be created by deleting code.

#include <iostream>
#include <string>

// Before
class NotificationServiceBefore {
public:
    void sendNotification(const UserBefore& user, const std::string& message) {
        if (user.emailNotificationsEnabled) {
            sendEmail(user.email, message);
        } else {
            std::cout << "Email notifications are disabled for " << user.name << "." << std::endl;
        }

        if (user.smsNotificationsEnabled) {
            sendSms(user.phoneNumber, message);
        } else {
            std::cout << "SMS notifications are disabled for " << user.name << "." << std::endl;
        }
    }

private:
    void sendEmail(const std::string& email, const std::string& message) {
        // Code to send email
        std::cout << "Email sent to " << email << ": " << message << std::endl;
    }

    void sendSms(const std::string& phoneNumber, const std::string& message) {
        // Code to send SMS
        std::cout << "SMS sent to " << phoneNumber << ": " << message << std::endl;
    }
};

class UserBefore {
public:
    std::string name;
    std::string email;
    std::string phoneNumber;
    bool emailNotificationsEnabled = false;
    bool smsNotificationsEnabled = false;

    UserBefore(const std::string& name, const std::string& email, const std::string& phoneNumber)
        : name(name), email(email), phoneNumber(phoneNumber) {}
};

// After
class NotificationService {
public:
    void sendNotification(const User& user, const std::string& message) {
        sendEmail(user.email, message);
        sendSms(user.phoneNumber, message);
    }

private:
    void sendEmail(const std::string& email, const std::string& message) {
        // Code to send email
        std::cout << "Email sent to " << email << ": " << message << std::endl;
    }

    void sendSms(const std::string& phoneNumber, const std::string& message) {
        // Code to send SMS
        std::cout << "SMS sent to " << phoneNumber << ": " << message << std::endl;
    }
};

class User {
public:
    std::string name;
    std::string email;
    std::string phoneNumber;

    User(const std::string& name, const std::string& email, const std::string& phoneNumber)
        : name(name), email(email), phoneNumber(phoneNumber) {}
};

int main() {
    // Before usage
    UserBefore userBefore("Alice", "alice@example.com", "123-456-7890");
    userBefore.emailNotificationsEnabled = true;
    userBefore.smsNotificationsEnabled = true;
    NotificationServiceBefore serviceBefore;
    serviceBefore.sendNotification(userBefore, "Your order has been shipped.");

    std::cout << std::endl;

    // After usage
    User user("Alice", "alice@example.com", "123-456-7890");
    NotificationService service;
    service.sendNotification(user, "Your order has been shipped.");

    return 0;
}
