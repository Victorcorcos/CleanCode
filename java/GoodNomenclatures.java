// Good Nomenclatures
// Use descriptive variable names that reveal intent.
// Use pronounceable and easily searchable names.
// Use conventions (related to the language, the business, and the organization/team's communication).

public class GoodNomenclatures {
    // Before
    public static int fact(int n) {
        if (n <= 1) {
            return 1;
        } else {
            return n * fact(n - 1);
        }
    }

    // After
    public static int factorial(int number) {
        if (number <= 1) {
            return 1;
        } else {
            return number * factorial(number - 1);
        }
    }

    public static void main(String[] args) {
        // Before
        int x = 5;
        int y = fact(x);
        System.out.println(y); // Outputs: 120

        System.out.println();

        // After
        int number = 5;
        int result = factorial(number);
        System.out.println(result); // Outputs: 120
    }
}
