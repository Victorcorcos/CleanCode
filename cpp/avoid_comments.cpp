// Avoid Comments
// Prefer to avoid comments rather than to write them
// If a comment is truly necessary, explain the "why" not the "what".

#include <iostream>
#include <cmath>

// Before
class CalculatorBefore {
public:
    double calculateArea(double radius) {
        // Calculate the area of a circle
        double area = M_PI * radius * radius;

        // Round the area to two decimal places
        area = std::round(area * 100.0) / 100.0;

        return area;
    }
};

// After
class Calculator {
public:
    double calculateArea(double radius) {
        double area = circleArea(radius);
        return std::round(area * 100.0) / 100.0;
    }

private:
    double circleArea(double radius) {
        return M_PI * radius * radius;
    }
};

int main() {
    CalculatorBefore calculatorBefore;
    std::cout << calculatorBefore.calculateArea(5) << std::endl; // Outputs: 78.54

    std::cout << std::endl;

    Calculator calculator;
    std::cout << calculator.calculateArea(5) << std::endl; // Outputs: 78.54

    return 0;
}
