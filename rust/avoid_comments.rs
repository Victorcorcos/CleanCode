// Avoid Comments
// Prefer to avoid comments rather than to write them
// If a comment is truly necessary, explain the "why" not the "what".

use std::f64::consts::PI;

// Before
struct CalculatorBefore;

impl CalculatorBefore {
    fn calculate_area(&self, radius: f64) -> f64 {
        // Calculate the area of a circle
        let area = PI * radius * radius;

        // Round the area to two decimal places
        let area = (area * 100.0).round() / 100.0;

        area
    }
}

// After
struct Calculator;

impl Calculator {
    fn calculate_area(&self, radius: f64) -> f64 {
        let area = self.circle_area(radius);
        (area * 100.0).round() / 100.0
    }

    fn circle_area(&self, radius: f64) -> f64 {
        PI * radius * radius
    }
}

fn main() {
    let calculator_before = CalculatorBefore;
    println!("{}", calculator_before.calculate_area(5.0)); // Outputs: 78.54

    println!();

    let calculator = Calculator;
    println!("{}", calculator.calculate_area(5.0)); // Outputs: 78.54
}
