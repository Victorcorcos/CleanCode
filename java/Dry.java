// DRY (Don't Repeat Yourself)
// If a piece of code is identical or very similar to another, try to extract it into a generalized function

public class Dry {
    // Before
    public static void greetMorning() {
        System.out.println("Good morning, Alice!");
    }

    public static void greetAfternoon() {
        System.out.println("Good afternoon, Alice!");
    }

    public static void greetEvening() {
        System.out.println("Good evening, Alice!");
    }

    // After
    public static void greet(String dayPeriod, String name) {
        System.out.println("Good " + dayPeriod + ", " + name + "!");
    }

    public static void main(String[] args) {
        // Before usage
        greetMorning();
        greetAfternoon();
        greetEvening();

        System.out.println();

        // After usage
        greet("morning", "Alice");
        greet("afternoon", "Alice");
        greet("evening", "Alice");
    }
}
