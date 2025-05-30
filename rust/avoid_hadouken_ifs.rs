// Avoid Hadouken IFs
// Avoid nested IFs (Hadouken IFs)
// Solution: Early Returns, Switch-Cases

struct Order {
    is_valid: bool,
    is_in_stock: bool,
    payment_success: bool,
}

impl Order {
    fn new() -> Self {
        Order {
            is_valid: true,
            is_in_stock: true,
            payment_success: true,
        }
    }

    fn valid(&self) -> bool {
        self.is_valid
    }

    fn in_stock(&self) -> bool {
        self.is_in_stock
    }

    fn payment_successful(&self) -> bool {
        self.payment_success
    }
}

// Before
fn process_order_before(order: &Order) {
    if order.valid() {
        if order.in_stock() {
            if order.payment_successful() {
                println!("Order processed successfully!");
            } else {
                println!("Payment failed.");
            }
        } else {
            println!("Item is out of stock.");
        }
    } else {
        println!("Order is invalid.");
    }
}

// After
fn process_order(order: &Order) {
    if !order.valid() {
        println!("Order is invalid.");
        return;
    }
    
    if !order.in_stock() {
        println!("Item is out of stock.");
        return;
    }
    
    if !order.payment_successful() {
        println!("Payment failed.");
        return;
    }

    println!("Order processed successfully!");
}

fn main() {
    let order = Order::new();
    
    process_order_before(&order);
    println!();
    process_order(&order);
}
