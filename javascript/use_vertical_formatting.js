// Use Vertical Formatting
// You should read your code from top to bottom.
// You should read your code without "jumping" over functions.
// Similar and dependent functions should be close vertically.

// Before
class Calculator {
  add(a, b) {
    return a + b;
  }

  multiply(a, b) {
    return a * b;
  }

  calculate(a, b) {
    const sumResult = this.add(a, b);
    const difference = this.subtract(a, b);
    const product = this.multiply(a, b);
    const quotient = this.divide(a, b);
    return [sumResult, difference, product, quotient];
  }

  divide(a, b) {
    return a / b;
  }

  subtract(a, b) {
    return a - b;
  }
}

const calculator = new Calculator();
const result = calculator.calculate(10, 5);
console.log(result); // [15, 5, 50, 2]


// After
class Calculator {
  calculate(a, b) {
    const sumResult = this.add(a, b);
    const difference = this.subtract(a, b);
    const product = this.multiply(a, b);
    const quotient = this.divide(a, b);
    return [sumResult, difference, product, quotient];
  }

  add(a, b) {
    return a + b;
  }

  subtract(a, b) {
    return a - b;
  }

  multiply(a, b) {
    return a * b;
  }

  divide(a, b) {
    return a / b;
  }
}

const calculator = new Calculator();
const result = calculator.calculate(10, 5);
console.log(result); // [15, 5, 50, 2]
