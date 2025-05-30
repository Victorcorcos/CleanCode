// Encapsulate Conditionals
// Extract complex conditionals into functions that convey the intent of the condition.
// Create names that reveal the intent of the conditional.

#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int age;
    bool children;
    bool is_premium;
    bool coupon;
} User;

User create_user() {
    User user = {25, false, false, false};
    return user;
}

bool user_has_children(User* user) {
    return user->children;
}

bool user_premium_member(User* user) {
    return user->is_premium;
}

bool user_has_coupon(User* user) {
    return user->coupon;
}

// Before
void check_availability_before(User* user) {
    if (user->age > 18 && !user_has_children(user) && (user_premium_member(user) || user_has_coupon(user))) {
        printf("User is available for the offer.\n");
    } else {
        printf("User is not available for the offer.\n");
    }
}

// After
bool is_available(User* user) {
    if (user->age <= 18) {
        return false;
    }
    if (user_has_children(user)) {
        return false;
    }
    if (user_premium_member(user)) {
        return true;
    }
    if (user_has_coupon(user)) {
        return true;
    }
    return false;
}

void check_availability(User* user) {
    if (is_available(user)) {
        printf("User is available for the offer.\n");
    } else {
        printf("User is not available for the offer.\n");
    }
}

int main() {
    User user = create_user();
    
    check_availability_before(&user);
    printf("\n");
    check_availability(&user);

    return 0;
}
