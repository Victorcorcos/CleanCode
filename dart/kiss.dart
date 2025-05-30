// KISS (Keep It Simple Stupid)
// Try to make the code so "stupid" that a 5-year-old could understand it.

// Before
double calculateDiscountBefore(double price) {
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
  double discountedPrice = price - (price * discount / 100);
  return discountedPrice;
}

// After
double calculateDiscount(double price) {
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

void main() {
  print(calculateDiscountBefore(150));
  print(calculateDiscountBefore(50));
  print(calculateDiscountBefore(250));

  print("");

  print(calculateDiscount(150));
  print(calculateDiscount(50));
  print(calculateDiscount(250));
}
