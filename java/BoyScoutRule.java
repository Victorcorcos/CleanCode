// Boy Scout Rule
// Always leave the campsite cleaner than you found it.
// Take the time to apply Clean Code principles to small parts of the code as you program.
// Over time, you will find the codebase much cleaner than when you found it!

import java.util.HashMap;
import java.util.Map;

public class BoyScoutRule {
    // Before
    public static void printUserInfoBefore(Map<String, Object> user) {
        System.out.println("Name: " + user.get("name"));
        System.out.println("Email: " + user.get("email"));
        if (user.get("age") != null) {
            System.out.println("Age: " + user.get("age").toString());
        }
    }

    // After
    public static void printUserInfo(Map<String, Object> user) {
        System.out.println("Name: " + user.get("name"));
        System.out.println("Email: " + user.get("email"));
        if (user.get("age") != null) {
            System.out.println("Age: " + user.get("age"));
        }
    }

    public static void main(String[] args) {
        Map<String, Object> user = new HashMap<>();
        user.put("name", "Alice");
        user.put("email", "alice@example.com");
        user.put("age", 30);

        printUserInfoBefore(user);
        System.out.println();
        printUserInfo(user);
    }
}
