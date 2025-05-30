// Encapsulate Conditionals
// Extract complex conditionals into functions that convey the intent of the condition.
// Create names that reveal the intent of the conditional.

public class EncapsulateConditionals {
    static class User {
        private int age = 25;
        private boolean children = false;
        private boolean isPremium = false;
        private boolean coupon = false;

        public int getAge() {
            return age;
        }

        public boolean hasChildren() {
            return children;
        }

        public boolean premiumMember() {
            return isPremium;
        }

        public boolean hasCoupon() {
            return coupon;
        }
    }

    // Before
    public static void checkAvailabilityBefore(User user) {
        if (user.getAge() > 18 && !user.hasChildren() && (user.premiumMember() || user.hasCoupon())) {
            System.out.println("User is available for the offer.");
        } else {
            System.out.println("User is not available for the offer.");
        }
    }

    // After
    public static void checkAvailability(User user) {
        if (isAvailable(user)) {
            System.out.println("User is available for the offer.");
        } else {
            System.out.println("User is not available for the offer.");
        }
    }

    private static boolean isAvailable(User user) {
        if (user.getAge() <= 18) {
            return false;
        }
        if (user.hasChildren()) {
            return false;
        }
        if (user.premiumMember()) {
            return true;
        }
        if (user.hasCoupon()) {
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        User user = new User();
        
        checkAvailabilityBefore(user);
        System.out.println();
        checkAvailability(user);
    }
}
