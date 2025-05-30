// Avoid Hadouken IFs
// Avoid nested IFs (Hadouken IFs)
// Solution: Early Returns, Switch-Cases

#include <iostream>

class Order {
private:
    bool isValid = true;
    bool isInStock = true;
    bool paymentSuccess = true;

public:
    bool valid() const {
        return isValid;
    }

    bool inStock() const {
        return isInStock;
    }

    bool paymentSuccessful() const {
        return paymentSuccess;
    }
};

// Before
void processOrderBefore(const Order& order) {
    if (order.valid()) {
        if (order.inStock()) {
            if (order.paymentSuccessful()) {
                std::cout << "Order processed successfully!" << std::endl;
            } else {
                std::cout << "Payment failed." << std::endl;
            }
        } else {
            std::cout << "Item is out of stock." << std::endl;
        }
    } else {
        std::cout << "Order is invalid." << std::endl;
    }
}

// After
void processOrder(const Order& order) {
    if (!order.valid()) {
        std::cout << "Order is invalid." << std::endl;
        return;
    }
    
    if (!order.inStock()) {
        std::cout << "Item is out of stock." << std::endl;
        return;
    }
    
    if (!order.paymentSuccessful()) {
        std::cout << "Payment failed." << std::endl;
        return;
    }

    std::cout << "Order processed successfully!" << std::endl;
}

int main() {
    Order order;
    
    processOrderBefore(order);
    std::cout << std::endl;
    processOrder(order);

    return 0;
}
