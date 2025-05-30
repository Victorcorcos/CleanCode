// KISS (Keep It Simple Stupid)
// Try to make the code so "stupid" that a 5-year-old could understand it.

#include <stdio.h>

// Before
double calculate_discount_before(double price) {
    double discount;
    if (price > 100) {
        if (price < 200) {
            discount = 10;
        } else {
            discount = 20;
        }
    } else {
        discount = 0;
    }
    double discounted_price = price - (price * discount / 100);
    return discounted_price;
}

// After
double calculate_discount(double price) {
    double discount;
    if (price <= 100) {
        discount = 0;
    } else if (price <= 200) {
        discount = 10;
    } else {
        discount = 20;
    }
    
    return price - (price * discount / 100);
}

int main() {
    printf("%.2f\n", calculate_discount_before(150));
    printf("%.2f\n", calculate_discount_before(50));
    printf("%.2f\n", calculate_discount_before(250));

    printf("\n");

    printf("%.2f\n", calculate_discount(150));
    printf("%.2f\n", calculate_discount(50));
    printf("%.2f\n", calculate_discount(250));

    return 0;
}
