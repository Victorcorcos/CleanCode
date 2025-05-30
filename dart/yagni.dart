// YAGNI (You Ain't Gonna Need It)
// Don't build a cannon to kill a fly; you might not even need it afterward.

// Before
class UserBefore {
  String name;
  String email;
  int? age;  // Unused feature
  String? address;  // Unused feature
  String? phoneNumber;  // Unused feature

  UserBefore(this.name, this.email) {
    age = null;
    address = null;
    phoneNumber = null;
  }

  void sendWelcomeEmail() {
    print("Welcome, $name! A welcome email has been sent to $email.");
  }
}

// After
class User {
  String name;
  String email;

  User(this.name, this.email);

  void sendWelcomeEmail() {
    print("Welcome, $name! A welcome email has been sent to $email.");
  }
}

void main() {
  var userBefore = UserBefore("Alice", "alice@example.com");
  userBefore.sendWelcomeEmail();

  print("");

  var user = User("Alice", "alice@example.com");
  user.sendWelcomeEmail();
}
