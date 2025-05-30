// Encapsulate Conditionals
// Extract complex conditionals into functions that convey the intent of the condition.
// Create names that reveal the intent of the conditional.

#include <iostream>

class User {
private:
    int age = 25;
    bool children = false;
    bool isPremium = false;
    bool coupon = false;

public:
    int getAge() const {
        return age;
    }

    bool hasChildren() const {
        return children;
    }

    bool premiumMember() const {
        return isPremium;
    }

    bool hasCoupon() const {
        return coupon;
    }
};

// Before
void checkAvailabilityBefore(const User& user) {
    if (user.getAge() > 18 && !user.hasChildren() && (user.premiumMember() || user.hasCoupon())) {
        std::cout << "User is available for the offer." << std::endl;
    } else {
        std::cout << "User is not available for the offer." << std::endl;
    }
}

// After
bool isAvailable(const User& user) {
    if (user.getAge() <= 18) {
        return false;
    }
    if (user.hasChildren()) {
        return false;
    }
    if (user.premiumMember()) {
        return true;
    }
    if (user.hasCoupon()) {
        return true;
    }
    return false;
}

void checkAvailability(const User& user) {
    if (isAvailable(user)) {
        std::cout << "User is available for the offer." << std::endl;
    } else {
        std::cout << "User is not available for the offer." << std::endl;
    }
}

int main() {
    User user;
    
    checkAvailabilityBefore(user);
    std::cout << std::endl;
    checkAvailability(user);

    return 0;
}
