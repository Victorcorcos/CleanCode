// Avoid Negative Conditionals
// Positive conditionals reduce mental strain and make it easier to reason about the code.

#include <stdio.h>
#include <stdbool.h>

typedef struct {
    bool is_admin;
    bool is_premium;
} User;

User create_user() {
    User user = {false, false};
    return user;
}

bool user_admin(User* user) {
    return user->is_admin;
}

bool user_premium_member(User* user) {
    return user->is_premium;
}

// Before
void check_access_before(User* user) {
    if (!user_admin(user)) {
        if (!user_premium_member(user)) {
            printf("Access denied.\n");
        } else {
            printf("Access granted.\n");
        }
    } else {
        printf("Access granted.\n");
    }
}

// After
void check_access(User* user) {
    if (user_admin(user) || user_premium_member(user)) {
        printf("Access granted.\n");
    } else {
        printf("Access denied.\n");
    }
}

int main() {
    User user = create_user();
    
    check_access_before(&user);
    printf("\n");
    check_access(&user);

    return 0;
}
