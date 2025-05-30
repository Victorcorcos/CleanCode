// Use Vertical Formatting
// You should read your code from top to bottom.
// You should read your code without "jumping" over functions.
// Similar and dependent functions should be close vertically.

// Before
class CalculatorBefore {
  int add(int a, int b) {
    return a + b;
  }

  int multiply(int a, int b) {
    return a * b;
  }

  List<int> calculate(int a, int b) {
    int sum = add(a, b);
    int difference = subtract(a, b);
    int product = multiply(a, b);
    int quotient = divide(a, b);
    return [sum, difference, product, quotient];
  }

  int divide(int a, int b) {
    return a ~/ b;
  }

  int subtract(int a, int b) {
    return a - b;
  }
}

// After
class Calculator {
  List<int> calculate(int a, int b) {
    int sum = add(a, b);
    int difference = subtract(a, b);
    int product = multiply(a, b);
    int quotient = divide(a, b);
    return [sum, difference, product, quotient];
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
    return a ~/ b;
  }
}

void main() {
  var calculatorBefore = CalculatorBefore();
  List<int> resultBefore = calculatorBefore.calculate(10, 5);
  print(resultBefore); // [15, 5, 50, 2]

  print("");

  var calculator = Calculator();
  List<int> result = calculator.calculate(10, 5);
  print(result); // [15, 5, 50, 2]
}
