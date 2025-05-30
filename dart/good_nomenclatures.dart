// Good Nomenclatures
// Use descriptive variable names that reveal intent.
// Use pronounceable and easily searchable names.
// Use conventions (related to the language, the business, and the organization/team's communication).

// Before
int fact(int n) {
  if (n <= 1) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}

// After
int factorial(int number) {
  if (number <= 1) {
    return 1;
  } else {
    return number * factorial(number - 1);
  }
}

void main() {
  // Before
  int x = 5;
  int y = fact(x);
  print(y); // Outputs: 120

  print("");

  // After
  int number = 5;
  int result = factorial(number);
  print(result); // Outputs: 120
}
