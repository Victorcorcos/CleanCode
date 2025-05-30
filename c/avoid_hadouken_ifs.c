// Avoid Hadouken IFs
// Avoid nested IFs (Hadouken IFs)
// Solution: Early Returns, Switch-Cases

#include <stdio.h>
#include <stdbool.h>

typedef struct {
    bool is_valid;
    bool is_in_stock;
    bool payment_success;
} Order;

Order create_order() {
    Order order = {true, true, true};
    return order;
}

bool order_valid(Order* order) {
    return order->is_valid;
}

bool order_in_stock(Order* order) {
    return order->is_in_stock;
}

bool payment_successful(Order* order) {
    return order->payment_success;
}

// Before
void process_order_before(Order* order) {
    if (order_valid(order)) {
        if (order_in_stock(order)) {
            if (payment_successful(order)) {
                printf("Order processed successfully!\n");
            } else {
                printf("Payment failed.\n");
            }
        } else {
            printf("Item is out of stock.\n");
        }
    } else {
        printf("Order is invalid.\n");
    }
}

// After
void process_order(Order* order) {
    if (!order_valid(order)) {
        printf("Order is invalid.\n");
        return;
    }
    
    if (!order_in_stock(order)) {
        printf("Item is out of stock.\n");
        return;
    }
    
    if (!payment_successful(order)) {
        printf("Payment failed.\n");
        return;
    }

    printf("Order processed successfully!\n");
}

int main() {
    Order order = create_order();
    
    process_order_before(&order);
    printf("\n");
    process_order(&order);

    return 0;
}
