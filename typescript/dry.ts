// DRY (Don't Repeat Yourself)
// If a piece of code is identical or very similar to another, try to extract it into a generalized function

// Before
function greetMorning(): void {
  console.log("Good morning, Alice!");
}

function greetAfternoon(): void {
  console.log("Good afternoon, Alice!");
}

function greetEvening(): void {
  console.log("Good evening, Alice!");
}

greetMorning();
greetAfternoon();
greetEvening();


// After
function greet(dayPeriod: string, name: string): void {
  console.log(`Good ${dayPeriod}, ${name}!`);
}

greet("morning", "Alice");
greet("afternoon", "Alice");
greet("evening", "Alice");
