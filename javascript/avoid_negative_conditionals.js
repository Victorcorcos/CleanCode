// Avoid Negative Conditionals
// Positive conditionals reduce mental strain and make it easier to reason about the code.

// Before
class User {
  constructor() {
    this.isAdmin = false;
    this.isPremium = false;
  }

  admin() {
    return this.isAdmin;
  }

  premiumMember() {
    return this.isPremium;
  }
}

function checkAccess(user) {
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
  constructor() {
    this.isAdmin = false;
    this.isPremium = false;
  }

  admin() {
    return this.isAdmin;
  }

  premiumMember() {
    return this.isPremium;
  }
}

function checkAccess(user) {
  if (user.admin() || user.premiumMember()) {
    console.log("Access granted.");
  } else {
    console.log("Access denied.");
  }
}

const user = new User();
checkAccess(user);
