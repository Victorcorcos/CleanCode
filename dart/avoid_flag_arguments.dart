// Avoid Flag Arguments
// Avoid providing boolean arguments (true/false) to functions or methods.
// You could pass a string with a clearer name (for example).

// Before
void greetBefore(String name, bool formal) {
  if (formal) {
    print("Good evening, $name.");
  } else {
    print("Hi, $name!");
  }
}

// After
void greet(String name, String formality) {
  switch (formality) {
    case "formal":
      print("Good evening, $name.");
      break;
    case "informal":
      print("Hi, $name!");
      break;
  }
}

void main() {
  greetBefore("Alice", true);
  greetBefore("Bob", false);

  print("");

  greet("Alice", "formal");
  greet("Bob", "informal");
}
