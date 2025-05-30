// Avoid Negative Conditionals
// Positive conditionals reduce mental strain and make it easier to reason about the code.

class User {
  bool _isAdmin = false;
  bool _isPremium = false;

  bool admin() => _isAdmin;
  bool premiumMember() => _isPremium;
}

// Before
void checkAccessBefore(User user) {
  if (!user.admin()) {
    if (!user.premiumMember()) {
      print("Access denied.");
    } else {
      print("Access granted.");
    }
  } else {
    print("Access granted.");
  }
}

// After
void checkAccess(User user) {
  if (user.admin() || user.premiumMember()) {
    print("Access granted.");
  } else {
    print("Access denied.");
  }
}

void main() {
  var user = User();
  
  checkAccessBefore(user);
  print("");
  checkAccess(user);
}
