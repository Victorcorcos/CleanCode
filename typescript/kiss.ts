// KISS (Keep It Simple Stupid)
// Try to make the code so "stupid" that a 5-year-old could understand it.

// Before
function calculateDiscount(price: number): number {
  let discount: number;
  if (price > 100) {
    if (price < 200) {
      discount = 10;
    } else {
      discount = 20;
    }
  } else {
    discount = 0;
  }
  const discountedPrice = price - (price * discount / 100);
  return discountedPrice;
}

console.log(calculateDiscount(150));
console.log(calculateDiscount(50));
console.log(calculateDiscount(250));


// After
function calculateDiscount(price: number): number {
  let discount: number;
  if (price <= 100) {
    discount = 0;
  } else if (price <= 200) {
    discount = 10;
  } else {
    discount = 20;
  }
  
  return price - (price * discount / 100);
}

console.log(calculateDiscount(150));
console.log(calculateDiscount(50));
console.log(calculateDiscount(250));
