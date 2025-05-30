// Boy Scout Rule
// Always leave the campsite cleaner than you found it.
// Take the time to apply Clean Code principles to small parts of the code as you program.
// Over time, you will find the codebase much cleaner than when you found it!

// Before
void printUserInfoBefore(Map<String, dynamic> user) {
  print("Name: " + user["name"]);
  print("Email: " + user["email"]);
  if (user["age"] != null) {
    print("Age: " + user["age"].toString());
  }
}

// After
void printUserInfo(Map<String, dynamic> user) {
  print("Name: ${user["name"]}");
  print("Email: ${user["email"]}");
  if (user["age"] != null) {
    print("Age: ${user["age"]}");
  }
}

void main() {
  Map<String, dynamic> user = {
    "name": "Alice",
    "email": "alice@example.com",
    "age": 30
  };

  printUserInfoBefore(user);
  print("");
  printUserInfo(user);
}
