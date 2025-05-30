// Avoid Flag Arguments
// Avoid providing boolean arguments (true/false) to functions or methods.
// You could pass a string with a clearer name (for example).

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Before
void greet_before(const char* name, bool formal) {
    if (formal) {
        printf("Good evening, %s.\n", name);
    } else {
        printf("Hi, %s!\n", name);
    }
}

// After
void greet(const char* name, const char* formality) {
    if (strcmp(formality, "formal") == 0) {
        printf("Good evening, %s.\n", name);
    } else if (strcmp(formality, "informal") == 0) {
        printf("Hi, %s!\n", name);
    }
}

int main() {
    greet_before("Alice", true);
    greet_before("Bob", false);

    printf("\n");

    greet("Alice", "formal");
    greet("Bob", "informal");

    return 0;
}
