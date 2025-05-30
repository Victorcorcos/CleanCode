// Boy Scout Rule
// Always leave the campsite cleaner than you found it.
// Take the time to apply Clean Code principles to small parts of the code as you program.
// Over time, you will find the codebase much cleaner than when you found it!

use std::collections::HashMap;

// Before
fn print_user_info_before(user: &HashMap<String, String>) {
    println!("Name: {}", user.get("name").unwrap_or(&"".to_string()));
    println!("Email: {}", user.get("email").unwrap_or(&"".to_string()));
    if let Some(age) = user.get("age") {
        if !age.is_empty() {
            println!("Age: {}", age);
        }
    }
}

// After
fn print_user_info(user: &HashMap<String, String>) {
    if let Some(name) = user.get("name") {
        println!("Name: {}", name);
    }
    if let Some(email) = user.get("email") {
        println!("Email: {}", email);
    }
    if let Some(age) = user.get("age") {
        if !age.is_empty() {
            println!("Age: {}", age);
        }
    }
}

fn main() {
    let mut user = HashMap::new();
    user.insert("name".to_string(), "Alice".to_string());
    user.insert("email".to_string(), "alice@example.com".to_string());
    user.insert("age".to_string(), "30".to_string());

    print_user_info_before(&user);
    println!();
    print_user_info(&user);
}
