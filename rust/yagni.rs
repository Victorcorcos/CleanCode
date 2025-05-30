// YAGNI (You Ain't Gonna Need It)
// Don't build a cannon to kill a fly; you might not even need it afterward.

// Before
struct UserBefore {
    name: String,
    email: String,
    age: Option<u32>,        // Unused feature
    address: Option<String>, // Unused feature
    phone_number: Option<String>, // Unused feature
}

impl UserBefore {
    fn new(name: String, email: String) -> Self {
        UserBefore {
            name,
            email,
            age: None,
            address: None,
            phone_number: None,
        }
    }

    fn send_welcome_email(&self) {
        println!("Welcome, {}! A welcome email has been sent to {}.", self.name, self.email);
    }
}

// After
struct User {
    name: String,
    email: String,
}

impl User {
    fn new(name: String, email: String) -> Self {
        User { name, email }
    }

    fn send_welcome_email(&self) {
        println!("Welcome, {}! A welcome email has been sent to {}.", self.name, self.email);
    }
}

fn main() {
    let user_before = UserBefore::new("Alice".to_string(), "alice@example.com".to_string());
    user_before.send_welcome_email();

    println!();

    let user = User::new("Alice".to_string(), "alice@example.com".to_string());
    user.send_welcome_email();
}
