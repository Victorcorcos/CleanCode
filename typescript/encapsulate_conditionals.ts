// Encapsulate Conditionals
// Extract complex conditionals into functions that convey the intent of the condition.
// Create names that reveal the intent of the conditional.

// Before
class User {
  age: number = 25;
  children: boolean = false;
  isPremium: boolean = false;
  coupon: boolean = false;

  hasChildren(): boolean {
    return this.children;
  }

  premiumMember(): boolean {
    return this.isPremium;
  }

  hasCoupon(): boolean {
    return this.coupon;
  }
}

function checkAvailability(user: User): void {
  if (user.age > 18 && !user.hasChildren() && (user.premiumMember() || user.hasCoupon())) {
    console.log("User is available for the offer.");
  } else {
    console.log("User is not available for the offer.");
  }
}

const user = new User();
checkAvailability(user);


// After
class User {
  age: number = 25;
  children: boolean = false;
  isPremium: boolean = false;
  coupon: boolean = false;

  hasChildren(): boolean {
    return this.children;
  }

  premiumMember(): boolean {
    return this.isPremium;
  }

  hasCoupon(): boolean {
    return this.coupon;
  }
}

function checkAvailability(user: User): void {
  if (_isAvailable(user)) {
    console.log("User is available for the offer.");
  } else {
    console.log("User is not available for the offer.");
  }
}

function _isAvailable(user: User): boolean {
  if (user.age <= 18) {
    return false;
  }
  if (user.hasChildren()) {
    return false;
  }
  if (user.premiumMember()) {
    return true;
  }
  if (user.hasCoupon()) {
    return true;
  }
  return false;
}

const user = new User();
checkAvailability(user);
