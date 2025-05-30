// Boy Scout Rule
// Always leave the campsite cleaner than you found it.
// Take the time to apply Clean Code principles to small parts of the code as you program.
// Over time, you will find the codebase much cleaner than when you found it!

// Before
function printUserInfo(user) {
  console.log("Name: " + user.name);
  console.log("Email: " + user.email);
  if (user.age != null) {
    console.log("Age: " + user.age.toString());
  }
}

const user = { name: "Alice", email: "alice@example.com", age: 30 };
printUserInfo(user);


// After
function printUserInfo(user) {
  console.log(`Name: ${user.name}`);
  console.log(`Email: ${user.email}`);
  if (user.age) {
    console.log(`Age: ${user.age}`);
  }
}

const user = { name: "Alice", email: "alice@example.com", age: 30 };
printUserInfo(user);
