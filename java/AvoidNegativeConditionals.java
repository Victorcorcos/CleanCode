// Avoid Negative Conditionals
// Positive conditionals reduce mental strain and make it easier to reason about the code.

public class AvoidNegativeConditionals {
    static class User {
        private boolean isAdmin = false;
        private boolean isPremium = false;

        public boolean admin() {
            return isAdmin;
        }

        public boolean premiumMember() {
            return isPremium;
        }
    }

    // Before
    public static void checkAccessBefore(User user) {
        if (!user.admin()) {
            if (!user.premiumMember()) {
                System.out.println("Access denied.");
            } else {
                System.out.println("Access granted.");
            }
        } else {
            System.out.println("Access granted.");
        }
    }

    // After
    public static void checkAccess(User user) {
        if (user.admin() || user.premiumMember()) {
            System.out.println("Access granted.");
        } else {
            System.out.println("Access denied.");
        }
    }

    public static void main(String[] args) {
        User user = new User();
        
        checkAccessBefore(user);
        System.out.println();
        checkAccess(user);
    }
}
