// Avoid Comments
// Prefer to avoid comments rather than to write them
// If a comment is truly necessary, explain the "why" not the "what".

import 'dart:math' as math;

// Before
class CalculatorBefore {
  double calculateArea(double radius) {
    // Calculate the area of a circle
    double area = math.pi * radius * radius;

    // Round the area to two decimal places
    area = (area * 100).round() / 100;

    return area;
  }
}

// After
class Calculator {
  double calculateArea(double radius) {
    double area = _circleArea(radius);
    return (area * 100).round() / 100;
  }

  double _circleArea(double radius) {
    return math.pi * radius * radius;
  }
}

void main() {
  var calculatorBefore = CalculatorBefore();
  print(calculatorBefore.calculateArea(5)); // Outputs: 78.54

  print("");

  var calculator = Calculator();
  print(calculator.calculateArea(5)); // Outputs: 78.54
}
