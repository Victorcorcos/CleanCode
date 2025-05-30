// DRY (Don't Repeat Yourself)
// If a piece of code is identical or very similar to another, try to extract it into a generalized function

// Before
function greetMorning() {
  console.log("Good morning, Alice!");
}

function greetAfternoon() {
  console.log("Good afternoon, Alice!");
}

function greetEvening() {
  console.log("Good evening, Alice!");
}

greetMorning();
greetAfternoon();
greetEvening();


// After
function greet(dayPeriod, name) {
  console.log(`Good ${dayPeriod}, ${name}!`);
}

greet("morning", "Alice");
greet("afternoon", "Alice");
greet("evening", "Alice");
