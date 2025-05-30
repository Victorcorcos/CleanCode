// Good Nomenclatures
// Use descriptive variable names that reveal intent.
// Use pronounceable and easily searchable names.
// Use conventions (related to the language, the business, and the organization/team's communication).

#include <iostream>

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
    st::cout << y << std::endl; // Outputs: 120

    std::cout << std::endl;

    // After
    int number = 5;
    int result = factorial(number);
    std::cout << result << std::endl; // Outputs: 120

    return 0;
}
