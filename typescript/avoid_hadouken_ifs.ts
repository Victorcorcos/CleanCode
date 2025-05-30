// Avoid Hadouken IFs
// Avoid nested IFs (Hadouken IFs)
// Solution: Early Returns, Switch-Cases

// Before
class Order {
  private isValid: boolean = true;
  private isInStock: boolean = true;
  private paymentSuccess: boolean = true;

  valid(): boolean {
    return this.isValid;
  }

  inStock(): boolean {
    return this.isInStock;
  }

  paymentSuccessful(): boolean {
    return this.paymentSuccess;
  }
}

function processOrder(order: Order): void {
  if (order.valid()) {
    if (order.inStock()) {
      if (order.paymentSuccessful()) {
        console.log("Order processed successfully!");
      } else {
        console.log("Payment failed.");
      }
    } else {
      console.log("Item is out of stock.");
    }
  } else {
    console.log("Order is invalid.");
  }
}

const order = new Order();
processOrder(order);


// After
class Order {
  private isValid: boolean = true;
  private isInStock: boolean = true;
  private paymentSuccess: boolean = true;

  valid(): boolean {
    return this.isValid;
  }

  inStock(): boolean {
    return this.isInStock;
  }

  paymentSuccessful(): boolean {
    return this.paymentSuccess;
  }
}

function processOrder(order: Order): void {
  if (!order.valid()) {
    console.log("Order is invalid.");
    return;
  }
  
  if (!order.inStock()) {
    console.log("Item is out of stock.");
    return;
  }
  
  if (!order.paymentSuccessful()) {
    console.log("Payment failed.");
    return;
  }

  console.log("Order processed successfully!");
}

const order = new Order();
processOrder(order);
