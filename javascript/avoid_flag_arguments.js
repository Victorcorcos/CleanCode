// Avoid Flag Arguments
// Avoid providing boolean arguments (true/false) to functions or methods.
// You could pass a string with a clearer name (for example).

// Before
function greet(name, formal) {
  if (formal) {
    console.log(`Good evening, ${name}.`);
  } else {
    console.log(`Hi, ${name}!`);
  }
}

greet("Alice", true);
greet("Bob", false);


// After
function greet(name, formality) {
  if (formality === "formal") {
    console.log(`Good evening, ${name}.`);
  } else if (formality === "informal") {
    console.log(`Hi, ${name}!`);
  }
}

greet("Alice", "formal");
greet("Bob", "informal");
