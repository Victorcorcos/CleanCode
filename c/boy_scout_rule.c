// Boy Scout Rule
// Always leave the campsite cleaner than you found it.
// Take the time to apply Clean Code principles to small parts of the code as you program.
// Over time, you will find the codebase much cleaner than when you found it!

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* name;
    char* email;
    int age;
} User;

// Before
void print_user_info_before(User* user) {
    printf("Name: ");
    printf("%s", user->name);
    printf("\n");
    printf("Email: ");
    printf("%s", user->email);
    printf("\n");
    if (user->age != 0) {
        printf("Age: ");
        printf("%d", user->age);
        printf("\n");
    }
}

// After
void print_user_info(User* user) {
    printf("Name: %s\n", user->name);
    printf("Email: %s\n", user->email);
    if (user->age) {
        printf("Age: %d\n", user->age);
    }
}

int main() {
    User user = {"Alice", "alice@example.com", 30};
    
    print_user_info_before(&user);
    printf("\n");
    print_user_info(&user);

    return 0;
}
