// Good Nomenclatures
// Use descriptive variable names that reveal intent.
// Use pronounceable and easily searchable names.
// Use conventions (related to the language, the business, and the organization/team's communication).

#include <stdio.h>

// Before
int fact(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

// After
int factorial(int number) {
    if (number <= 1) {
        return 1;
    } else {
        return number * factorial(number - 1);
    }
}

int main() {
    // Before
    int x = 5;
    int y = fact(x);
    printf("%d\n", y); // Outputs: 120

    printf("\n");

    // After
    int number = 5;
    int result = factorial(number);
    printf("%d\n", result); // Outputs: 120

    return 0;
}
