// Delete Code > Create Code
// Prefer to delete code rather than create code.
// Sometimes even new features can be created by deleting code.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Before
typedef struct {
    char* name;
    char* email;
    char* phone_number;
    bool email_notifications_enabled;
    bool sms_notifications_enabled;
} UserBefore;

UserBefore* create_user_before(const char* name, const char* email, const char* phone_number) {
    UserBefore* user = malloc(sizeof(UserBefore));
    user->name = malloc(strlen(name) + 1);
    strcpy(user->name, name);
    user->email = malloc(strlen(email) + 1);
    strcpy(user->email, email);
    user->phone_number = malloc(strlen(phone_number) + 1);
    strcpy(user->phone_number, phone_number);
    user->email_notifications_enabled = false;
    user->sms_notifications_enabled = false;
    return user;
}

void send_email_before(const char* email, const char* message) {
    printf("Email sent to %s: %s\n", email, message);
}

void send_sms_before(const char* phone_number, const char* message) {
    printf("SMS sent to %s: %s\n", phone_number, message);
}

void send_notification_before(UserBefore* user, const char* message) {
    if (user->email_notifications_enabled) {
        send_email_before(user->email, message);
    } else {
        printf("Email notifications are disabled for %s.\n", user->name);
    }

    if (user->sms_notifications_enabled) {
        send_sms_before(user->phone_number, message);
    } else {
        printf("SMS notifications are disabled for %s.\n", user->name);
    }
}

void free_user_before(UserBefore* user) {
    free(user->name);
    free(user->email);
    free(user->phone_number);
    free(user);
}

// After
typedef struct {
    char* name;
    char* email;
    char* phone_number;
} User;

User* create_user(const char* name, const char* email, const char* phone_number) {
    User* user = malloc(sizeof(User));
    user->name = malloc(strlen(name) + 1);
    strcpy(user->name, name);
    user->email = malloc(strlen(email) + 1);
    strcpy(user->email, email);
    user->phone_number = malloc(strlen(phone_number) + 1);
    strcpy(user->phone_number, phone_number);
    return user;
}

void send_email(const char* email, const char* message) {
    printf("Email sent to %s: %s\n", email, message);
}

void send_sms(const char* phone_number, const char* message) {
    printf("SMS sent to %s: %s\n", phone_number, message);
}

void send_notification(User* user, const char* message) {
    send_email(user->email, message);
    send_sms(user->phone_number, message);
}

void free_user(User* user) {
    free(user->name);
    free(user->email);
    free(user->phone_number);
    free(user);
}

int main() {
    // Before usage
    UserBefore* user_before = create_user_before("Alice", "alice@example.com", "123-456-7890");
    user_before->email_notifications_enabled = true;
    user_before->sms_notifications_enabled = true;
    send_notification_before(user_before, "Your order has been shipped.");
    free_user_before(user_before);

    printf("\n");

    // After usage
    User* user = create_user("Alice", "alice@example.com", "123-456-7890");
    send_notification(user, "Your order has been shipped.");
    free_user(user);

    return 0;
}
