// Avoid Flag Arguments
// Avoid providing boolean arguments (true/false) to functions or methods.
// You could pass a string with a clearer name (for example).

// Before
fn greet_before(name: &str, formal: bool) {
    if formal {
        println!("Good evening, {}.", name);
    } else {
        println!("Hi, {}!", name);
    }
}

// After
fn greet(name: &str, formality: &str) {
    match formality {
        "formal" => println!("Good evening, {}.", name),
        "informal" => println!("Hi, {}!", name),
        _ => {}
    }
}

fn main() {
    greet_before("Alice", true);
    greet_before("Bob", false);

    println!();

    greet("Alice", "formal");
    greet("Bob", "informal");
}
