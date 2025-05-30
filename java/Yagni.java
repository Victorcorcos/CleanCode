// YAGNI (You Ain't Gonna Need It)
// Don't build a cannon to kill a fly; you might not even need it afterward.

public class Yagni {
    // Before
    static class UserBefore {
        private String name;
        private String email;
        private Integer age;  // Unused feature
        private String address;  // Unused feature
        private String phoneNumber;  // Unused feature

        public UserBefore(String name, String email) {
            this.name = name;
            this.email = email;
            this.age = null;
            this.address = null;
            this.phoneNumber = null;
        }

        public void sendWelcomeEmail() {
            System.out.println("Welcome, " + name + "! A welcome email has been sent to " + email + ".");
        }
    }

    // After
    static class User {
        private String name;
        private String email;

        public User(String name, String email) {
            this.name = name;
            this.email = email;
        }

        public void sendWelcomeEmail() {
            System.out.println("Welcome, " + name + "! A welcome email has been sent to " + email + ".");
        }
    }

    public static void main(String[] args) {
        UserBefore userBefore = new UserBefore("Alice", "alice@example.com");
        userBefore.sendWelcomeEmail();

        System.out.println();

        User user = new User("Alice", "alice@example.com");
        user.sendWelcomeEmail();
    }
}
