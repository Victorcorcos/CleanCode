// Use Vertical Formatting
// You should read your code from top to bottom.
// You should read your code without "jumping" over functions.
// Similar and dependent functions should be close vertically.

#include <iostream>
#include <vector>

// Before
class CalculatorBefore {
public:
    int add(int a, int b) {
        return a + b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    std::vector<int> calculate(int a, int b) {
        int sumResult = add(a, b);
        int difference = subtract(a, b);
        int product = multiply(a, b);
        int quotient = divide(a, b);
        return {sumResult, difference, product, quotient};
    }

    int divide(int a, int b) {
        return a / b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
};

// After
class Calculator {
public:
    std::vector<int> calculate(int a, int b) {
        int sumResult = add(a, b);
        int difference = subtract(a, b);
        int product = multiply(a, b);
        int quotient = divide(a, b);
        return {sumResult, difference, product, quotient};
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
};

void printVector(const std::vector<int>& vec) {
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i < vec.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    CalculatorBefore calculatorBefore;
    auto resultBefore = calculatorBefore.calculate(10, 5);
    printVector(resultBefore); // [15, 5, 50, 2]

    std::cout << std::endl;

    Calculator calculator;
    auto result = calculator.calculate(10, 5);
    printVector(result); // [15, 5, 50, 2]

    return 0;
}
