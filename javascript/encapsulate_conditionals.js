// Encapsulate Conditionals
// Extract complex conditionals into functions that convey the intent of the condition.
// Create names that reveal the intent of the conditional.

// Before
class User {
  constructor() {
    this.age = 25;
    this.children = false;
    this.isPremium = false;
    this.coupon = false;
  }

  hasChildren() {
    return this.children;
  }

  premiumMember() {
    return this.isPremium;
  }

  hasCoupon() {
    return this.coupon;
  }
}

function checkAvailability(user) {
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
  constructor() {
    this.age = 25;
    this.children = false;
    this.isPremium = false;
    this.coupon = false;
  }

  hasChildren() {
    return this.children;
  }

  premiumMember() {
    return this.isPremium;
  }

  hasCoupon() {
    return this.coupon;
  }
}

function checkAvailability(user) {
  if (_isAvailable(user)) {
    console.log("User is available for the offer.");
  } else {
    console.log("User is not available for the offer.");
  }
}

function _isAvailable(user) {
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
