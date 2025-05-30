// Avoid Hadouken IFs
// Avoid nested IFs (Hadouken IFs)
// Solution: Early Returns, Switch-Cases

class Order {
  bool _isValid = true;
  bool _isInStock = true;
  bool _paymentSuccess = true;

  bool valid() => _isValid;
  bool inStock() => _isInStock;
  bool paymentSuccessful() => _paymentSuccess;
}

// Before
void processOrderBefore(Order order) {
  if (order.valid()) {
    if (order.inStock()) {
      if (order.paymentSuccessful()) {
        print("Order processed successfully!");
      } else {
        print("Payment failed.");
      }
    } else {
      print("Item is out of stock.");
    }
  } else {
    print("Order is invalid.");
  }
}

// After
void processOrder(Order order) {
  if (!order.valid()) {
    print("Order is invalid.");
    return;
  }
  
  if (!order.inStock()) {
    print("Item is out of stock.");
    return;
  }
  
  if (!order.paymentSuccessful()) {
    print("Payment failed.");
    return;
  }

  print("Order processed successfully!");
}

void main() {
  var order = Order();
  
  processOrderBefore(order);
  print("");
  processOrder(order);
}
