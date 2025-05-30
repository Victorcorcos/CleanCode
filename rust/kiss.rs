// KISS (Keep It Simple Stupid)
// Try to make the code so "stupid" that a 5-year-old could understand it.

// Before
fn calculate_discount_before(price: f64) -> f64 {
    let discount = if price > 100.0 {
        if price < 200.0 {
            10.0
        } else {
            20.0
        }
    } else {
        0.0
    };
    let discounted_price = price - (price * discount / 100.0);
    discounted_price
}

// After
fn calculate_discount(price: f64) -> f64 {
    let discount = if price <= 100.0 {
        0.0
    } else if price <= 200.0 {
        10.0
    } else {
        20.0
    };
    
    price - (price * discount / 100.0)
}

fn main() {
    println!("{}", calculate_discount_before(150.0));
    println!("{}", calculate_discount_before(50.0));
    println!("{}", calculate_discount_before(250.0));

    println!();

    println!("{}", calculate_discount(150.0));
    println!("{}", calculate_discount(50.0));
    println!("{}", calculate_discount(250.0));
}
