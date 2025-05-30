// Use Vertical Formatting
// You should read your code from top to bottom.
// You should read your code without "jumping" over functions.
// Similar and dependent functions should be close vertically.

// Before
struct CalculatorBefore;

impl CalculatorBefore {
    fn add(&self, a: i32, b: i32) -> i32 {
        a + b
    }

    fn multiply(&self, a: i32, b: i32) -> i32 {
        a * b
    }

    fn calculate(&self, a: i32, b: i32) -> Vec<i32> {
        let sum_result = self.add(a, b);
        let difference = self.subtract(a, b);
        let product = self.multiply(a, b);
        let quotient = self.divide(a, b);
        vec![sum_result, difference, product, quotient]
    }

    fn divide(&self, a: i32, b: i32) -> i32 {
        a / b
    }

    fn subtract(&self, a: i32, b: i32) -> i32 {
        a - b
    }
}

// After
struct Calculator;

impl Calculator {
    fn calculate(&self, a: i32, b: i32) -> Vec<i32> {
        let sum_result = self.add(a, b);
        let difference = self.subtract(a, b);
        let product = self.multiply(a, b);
        let quotient = self.divide(a, b);
        vec![sum_result, difference, product, quotient]
    }

    fn add(&self, a: i32, b: i32) -> i32 {
        a + b
    }

    fn subtract(&self, a: i32, b: i32) -> i32 {
        a - b
    }

    fn multiply(&self, a: i32, b: i32) -> i32 {
        a * b
    }

    fn divide(&self, a: i32, b: i32) -> i32 {
        a / b
    }
}

fn main() {
    let calculator_before = CalculatorBefore;
    let result_before = calculator_before.calculate(10, 5);
    println!("{:?}", result_before); // [15, 5, 50, 2]

    println!();

    let calculator = Calculator;
    let result = calculator.calculate(10, 5);
    println!("{:?}", result); // [15, 5, 50, 2]
}
