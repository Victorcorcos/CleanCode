// Avoid Negative Conditionals
// Positive conditionals reduce mental strain and make it easier to reason about the code.

#include <iostream>

class User {
private:
    bool isAdmin = false;
    bool isPremium = false;

public:
    bool admin() const {
        return isAdmin;
    }

    bool premiumMember() const {
        return isPremium;
    }
};

// Before
void checkAccessBefore(const User& user) {
    if (!user.admin()) {
        if (!user.premiumMember()) {
            std::cout << "Access denied." << std::endl;
        } else {
            std::cout << "Access granted." << std::endl;
        }
    } else {
        std::cout << "Access granted." << std::endl;
    }
}

// After
void checkAccess(const User& user) {
    if (user.admin() || user.premiumMember()) {
        std::cout << "Access granted." << std::endl;
    } else {
        std::cout << "Access denied." << std::endl;
    }
}

int main() {
    User user;
    
    checkAccessBefore(user);
    std::cout << std::endl;
    checkAccess(user);

    return 0;
}
