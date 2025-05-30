// YAGNI (You Ain't Gonna Need It)
// Don't build a cannon to kill a fly; you might not even need it afterward.

// Before
class User {
  constructor(name, email) {
    this.name = name;
    this.email = email;
    this.age = null;  // Unused feature
    this.address = null;  // Unused feature
    this.phoneNumber = null;  // Unused feature
  }

  sendWelcomeEmail() {
    console.log(`Welcome, ${this.name}! A welcome email has been sent to ${this.email}.`);
  }
}

const user = new User("Alice", "alice@example.com");
user.sendWelcomeEmail();


// After
class User {
  constructor(name, email) {
    this.name = name;
    this.email = email;
  }

  sendWelcomeEmail() {
    console.log(`Welcome, ${this.name}! A welcome email has been sent to ${this.email}.`);
  }
}

const user = new User("Alice", "alice@example.com");
user.sendWelcomeEmail();
