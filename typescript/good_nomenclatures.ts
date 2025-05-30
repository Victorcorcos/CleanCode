// Good Nomenclatures
// Use descriptive variable names that reveal intent.
// Use pronounceable and easily searchable names.
// Use conventions (related to the language, the business, and the organization/team's communication).

// Before
function fact(n: number): number {
  if (n <= 1) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}

const x: number = 5;
const y: number = fact(x);
console.log(y); // Outputs: 120


// After
function factorial(number: number): number {
  if (number <= 1) {
    return 1;
  } else {
    return number * factorial(number - 1);
  }
}

const number: number = 5;
const result: number = factorial(number);
console.log(result); // Outputs: 120
