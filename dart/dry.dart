// DRY (Don't Repeat Yourself)
// If a piece of code is identical or very similar to another, try to extract it into a generalized function

// Before
void greetMorning() {
  print("Good morning, Alice!");
}

void greetAfternoon() {
  print("Good afternoon, Alice!");
}

void greetEvening() {
  print("Good evening, Alice!");
}

// After
void greet(String dayPeriod, String name) {
  print("Good $dayPeriod, $name!");
}

void main() {
  // Before usage
  greetMorning();
  greetAfternoon();
  greetEvening();

  print("");

  // After usage
  greet("morning", "Alice");
  greet("afternoon", "Alice");
  greet("evening", "Alice");
}
