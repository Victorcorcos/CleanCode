// Avoid Negative Conditionals
// Positive conditionals reduce mental strain and make it easier to reason about the code.

// Before
class User {
  private isAdmin: boolean = false;
  private isPremium: boolean = false;

  admin(): boolean {
    return this.isAdmin;
  }

  premiumMember(): boolean {
    return this.isPremium;
  }
}

function checkAccess(user: User): void {
  if (!user.admin()) {
    if (!user.premiumMember()) {
      console.log("Access denied.");
    } else {
      console.log("Access granted.");
    }
  } else {
    console.log("Access granted.");
  }
}

const user = new User();
checkAccess(user);


// After
class User {
  private isAdmin: boolean = false;
  private isPremium: boolean = false;

  admin(): boolean {
    return this.isAdmin;
  }

  premiumMember(): boolean {
    return this.isPremium;
  }
}

function checkAccess(user: User): void {
  if (user.admin() || user.premiumMember()) {
    console.log("Access granted.");
  } else {
    console.log("Access denied.");
  }
}

const user = new User();
checkAccess(user);
