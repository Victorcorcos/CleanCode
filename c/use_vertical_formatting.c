// Use Vertical Formatting
// You should read your code from top to bottom.
// You should read your code without "jumping" over functions.
// Similar and dependent functions should be close vertically.

#include <stdio.h>

// Before - functions are not in logical order
int add_before(int a, int b) {
    return a + b;
}

int multiply_before(int a, int b) {
    return a * b;
}

void calculate_before(int a, int b) {
    int sum_result = add_before(a, b);
    int difference = subtract_before(a, b);
    int product = multiply_before(a, b);
    int quotient = divide_before(a, b);
    printf("[%d, %d, %d, %d]\n", sum_result, difference, product, quotient);
}

int divide_before(int a, int b) {
    return a / b;
}

int subtract_before(int a, int b) {
    return a - b;
}

// After - functions are in logical reading order
void calculate(int a, int b) {
    int sum_result = add(a, b);
    int difference = subtract(a, b);
    int product = multiply(a, b);
    int quotient = divide(a, b);
    printf("[%d, %d, %d, %d]\n", sum_result, difference, product, quotient);
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int main() {
    calculate_before(10, 5); // [15, 5, 50, 2]
    printf("\n");
    calculate(10, 5); // [15, 5, 50, 2]

    return 0;
}
