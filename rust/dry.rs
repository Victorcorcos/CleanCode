// DRY (Don't Repeat Yourself)
// If a piece of code is identical or very similar to another, try to extract it into a generalized function

// Before
fn greet_morning() {
    println!("Good morning, Alice!");
}

fn greet_afternoon() {
    println!("Good afternoon, Alice!");
}

fn greet_evening() {
    println!("Good evening, Alice!");
}

// After
fn greet(day_period: &str, name: &str) {
    println!("Good {}, {}!", day_period, name);
}

fn main() {
    // Before usage
    greet_morning();
    greet_afternoon();
    greet_evening();

    println!();

    // After usage
    greet("morning", "Alice");
    greet("afternoon", "Alice");
    greet("evening", "Alice");
}
