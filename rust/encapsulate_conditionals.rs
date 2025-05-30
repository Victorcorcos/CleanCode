// Encapsulate Conditionals
// Extract complex conditionals into functions that convey the intent of the condition.
// Create names that reveal the intent of the conditional.

struct User {
    age: u32,
    children: bool,
    is_premium: bool,
    coupon: bool,
}

impl User {
    fn new() -> Self {
        User {
            age: 25,
            children: false,
            is_premium: false,
            coupon: false,
        }
    }

    fn has_children(&self) -> bool {
        self.children
    }

    fn premium_member(&self) -> bool {
        self.is_premium
    }

    fn has_coupon(&self) -> bool {
        self.coupon
    }
}

// Before
fn check_availability_before(user: &User) {
    if user.age > 18 && !user.has_children() && (user.premium_member() || user.has_coupon()) {
        println!("User is available for the offer.");
    } else {
        println!("User is not available for the offer.");
    }
}

// After
fn check_availability(user: &User) {
    if is_available(user) {
        println!("User is available for the offer.");
    } else {
        println!("User is not available for the offer.");
    }
}

fn is_available(user: &User) -> bool {
    if user.age <= 18 {
        return false;
    }
    if user.has_children() {
        return false;
    }
    if user.premium_member() {
        return true;
    }
    if user.has_coupon() {
        return true;
    }
    false
}

fn main() {
    let user = User::new();
    
    check_availability_before(&user);
    println!();
    check_availability(&user);
}
