// Encapsulate Conditionals
// Extract complex conditionals into functions that convey the intent of the condition.
// Create names that reveal the intent of the conditional.

class User {
  int age = 25;
  bool _children = false;
  bool _isPremium = false;
  bool _coupon = false;

  bool hasChildren() => _children;
  bool premiumMember() => _isPremium;
  bool hasCoupon() => _coupon;
}

// Before
void checkAvailabilityBefore(User user) {
  if (user.age > 18 && !user.hasChildren() && (user.premiumMember() || user.hasCoupon())) {
    print("User is available for the offer.");
  } else {
    print("User is not available for the offer.");
  }
}

// After
void checkAvailability(User user) {
  if (_isAvailable(user)) {
    print("User is available for the offer.");
  } else {
    print("User is not available for the offer.");
  }
}

bool _isAvailable(User user) {
  if (user.age <= 18) return false;
  if (user.hasChildren()) return false;
  if (user.premiumMember()) return true;
  if (user.hasCoupon()) return true;
  return false;
}

void main() {
  var user = User();
  
  checkAvailabilityBefore(user);
  print("");
  checkAvailability(user);
}
