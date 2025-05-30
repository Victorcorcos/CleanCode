// YAGNI (You Ain't Gonna Need It)
// Don't build a cannon to kill a fly; you might not even need it afterward.

// Before
class User {
  name: string;
  email: string;
  age: number | null;  // Unused feature
  address: string | null;  // Unused feature
  phoneNumber: string | null;  // Unused feature

  constructor(name: string, email: string) {
    this.name = name;
    this.email = email;
    this.age = null;
    this.address = null;
    this.phoneNumber = null;
  }

  sendWelcomeEmail(): void {
    console.log(`Welcome, ${this.name}! A welcome email has been sent to ${this.email}.`);
  }
}

const user = new User("Alice", "alice@example.com");
user.sendWelcomeEmail();


// After
class User {
  name: string;
  email: string;

  constructor(name: string, email: string) {
    this.name = name;
    this.email = email;
  }

  sendWelcomeEmail(): void {
    console.log(`Welcome, ${this.name}! A welcome email has been sent to ${this.email}.`);
  }
}

const user = new User("Alice", "alice@example.com");
user.sendWelcomeEmail();
