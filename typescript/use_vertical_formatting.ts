// Use Vertical Formatting
// You should read your code from top to bottom.
// You should read your code without "jumping" over functions.
// Similar and dependent functions should be close vertically.

// Before
class Calculator {
  add(a: number, b: number): number {
    return a + b;
  }

  multiply(a: number, b: number): number {
    return a * b;
  }

  calculate(a: number, b: number): number[] {
    const sumResult = this.add(a, b);
    const difference = this.subtract(a, b);
    const product = this.multiply(a, b);
    const quotient = this.divide(a, b);
    return [sumResult, difference, product, quotient];
  }

  divide(a: number, b: number): number {
    return a / b;
  }

  subtract(a: number, b: number): number {
    return a - b;
  }
}

const calculator = new Calculator();
const result = calculator.calculate(10, 5);
console.log(result); // [15, 5, 50, 2]


// After
class Calculator {
  calculate(a: number, b: number): number[] {
    const sumResult = this.add(a, b);
    const difference = this.subtract(a, b);
    const product = this.multiply(a, b);
    const quotient = this.divide(a, b);
    return [sumResult, difference, product, quotient];
  }

  add(a: number, b: number): number {
    return a + b;
  }

  subtract(a: number, b: number): number {
    return a - b;
  }

  multiply(a: number, b: number): number {
    return a * b;
  }

  divide(a: number, b: number): number {
    return a / b;
  }
}

const calculator = new Calculator();
const result = calculator.calculate(10, 5);
console.log(result); // [15, 5, 50, 2]
