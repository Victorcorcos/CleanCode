// Avoid Flag Arguments
// Avoid providing boolean arguments (true/false) to functions or methods.
// You could pass a string with a clearer name (for example).

public class AvoidFlagArguments {
    // Before
    public static void greetBefore(String name, boolean formal) {
        if (formal) {
            System.out.println("Good evening, " + name + ".");
        } else {
            System.out.println("Hi, " + name + "!");
        }
    }

    // After
    public static void greet(String name, String formality) {
        if ("formal".equals(formality)) {
            System.out.println("Good evening, " + name + ".");
        } else if ("informal".equals(formality)) {
            System.out.println("Hi, " + name + "!");
        }
    }

    public static void main(String[] args) {
        greetBefore("Alice", true);
        greetBefore("Bob", false);

        System.out.println();

        greet("Alice", "formal");
        greet("Bob", "informal");
    }
}
