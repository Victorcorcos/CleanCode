// YAGNI (You Ain't Gonna Need It)
// Don't build a cannon to kill a fly; you might not even need it afterward.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Before
typedef struct {
    char* name;
    char* email;
    int age;        // Unused feature
    char* address;  // Unused feature
    char* phone_number; // Unused feature
} UserBefore;

UserBefore* create_user_before(const char* name, const char* email) {
    UserBefore* user = malloc(sizeof(UserBefore));
    user->name = malloc(strlen(name) + 1);
    strcpy(user->name, name);
    user->email = malloc(strlen(email) + 1);
    strcpy(user->email, email);
    user->age = 0;
    user->address = NULL;
    user->phone_number = NULL;
    return user;
}

void send_welcome_email_before(UserBefore* user) {
    printf("Welcome, %s! A welcome email has been sent to %s.\n", user->name, user->email);
}

void free_user_before(UserBefore* user) {
    free(user->name);
    free(user->email);
    free(user);
}

// After
typedef struct {
    char* name;
    char* email;
} User;

User* create_user(const char* name, const char* email) {
    User* user = malloc(sizeof(User));
    user->name = malloc(strlen(name) + 1);
    strcpy(user->name, name);
    user->email = malloc(strlen(email) + 1);
    strcpy(user->email, email);
    return user;
}

void send_welcome_email(User* user) {
    printf("Welcome, %s! A welcome email has been sent to %s.\n", user->name, user->email);
}

void free_user(User* user) {
    free(user->name);
    free(user->email);
    free(user);
}

int main() {
    UserBefore* user_before = create_user_before("Alice", "alice@example.com");
    send_welcome_email_before(user_before);
    free_user_before(user_before);

    printf("\n");

    User* user = create_user("Alice", "alice@example.com");
    send_welcome_email(user);
    free_user(user);

    return 0;
}
