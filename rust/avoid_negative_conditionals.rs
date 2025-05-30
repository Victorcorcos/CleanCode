// Avoid Negative Conditionals
// Positive conditionals reduce mental strain and make it easier to reason about the code.

struct User {
    is_admin: bool,
    is_premium: bool,
}

impl User {
    fn new() -> Self {
        User {
            is_admin: false,
            is_premium: false,
        }
    }

    fn admin(&self) -> bool {
        self.is_admin
    }

    fn premium_member(&self) -> bool {
        self.is_premium
    }
}

// Before
fn check_access_before(user: &User) {
    if !user.admin() {
        if !user.premium_member() {
            println!("Access denied.");
        } else {
            println!("Access granted.");
        }
    } else {
        println!("Access granted.");
    }
}

// After
fn check_access(user: &User) {
    if user.admin() || user.premium_member() {
        println!("Access granted.");
    } else {
        println!("Access denied.");
    }
}

fn main() {
    let user = User::new();
    
    check_access_before(&user);
    println!();
    check_access(&user);
}
