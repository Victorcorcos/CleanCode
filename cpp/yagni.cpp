// YAGNI (You Ain't Gonna Need It)
// Don't build a cannon to kill a fly; you might not even need it afterward.

#include <iostream>
#include <string>

// Before
class UserBefore {
private:
    std::string name;
    std::string email;
    int age;                    // Unused feature
    std::string address;        // Unused feature
    std::string phoneNumber;    // Unused feature

public:
    UserBefore(const std::string& name, const std::string& email) 
        : name(name), email(email), age(0), address(""), phoneNumber("") {}

    void sendWelcomeEmail() {
        std::cout << "Welcome, " << name << "! A welcome email has been sent to " << email << "." << std::endl;
    }
};

// After
class User {
private:
    std::string name;
    std::string email;

public:
    User(const std::string& name, const std::string& email) 
        : name(name), email(email) {}

    void sendWelcomeEmail() {
        std::cout << "Welcome, " << name << "! A welcome email has been sent to " << email << "." << std::endl;
    }
};

int main() {
    UserBefore userBefore("Alice", "alice@example.com");
    userBefore.sendWelcomeEmail();

    std::cout << std::endl;

    User user("Alice", "alice@example.com");
    user.sendWelcomeEmail();

    return 0;
}
