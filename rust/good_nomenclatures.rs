// Good Nomenclatures
// Use descriptive variable names that reveal intent.
// Use pronounceable and easily searchable names.
// Use conventions (related to the language, the business, and the organization/team's communication).

// Before
fn fact(n: u32) -> u32 {
    if n <= 1 {
        1
    } else {
        n * fact(n - 1)
    }
}

// After
fn factorial(number: u32) -> u32 {
    if number <= 1 {
        1
    } else {
        number * factorial(number - 1)
    }
}

fn main() {
    // Before
    let x = 5;
    let y = fact(x);
    println!("{}", y); // Outputs: 120

    println!();

    // After
    let number = 5;
    let result = factorial(number);
    println!("{}", result); // Outputs: 120
}
