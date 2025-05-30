// Use Vertical Formatting
// You should read your code from top to bottom.
// You should read your code without "jumping" over functions.
// Similar and dependent functions should be close vertically.

public class UseVerticalFormatting {
    // Before
    static class CalculatorBefore {
        public int add(int a, int b) {
            return a + b;
        }

        public int multiply(int a, int b) {
            return a * b;
        }

        public int[] calculate(int a, int b) {
            int sumResult = add(a, b);
            int difference = subtract(a, b);
            int product = multiply(a, b);
            int quotient = divide(a, b);
            return new int[]{sumResult, difference, product, quotient};
        }

        public int divide(int a, int b) {
            return a / b;
        }

        public int subtract(int a, int b) {
            return a - b;
        }
    }

    // After
    static class Calculator {
        public int[] calculate(int a, int b) {
            int sumResult = add(a, b);
            int difference = subtract(a, b);
            int product = multiply(a, b);
            int quotient = divide(a, b);
            return new int[]{sumResult, difference, product, quotient};
        }

        public int add(int a, int b) {
            return a + b;
        }

        public int subtract(int a, int b) {
            return a - b;
        }

        public int multiply(int a, int b) {
            return a * b;
        }

        public int divide(int a, int b) {
            return a / b;
        }
    }

    public static void main(String[] args) {
        CalculatorBefore calculatorBefore = new CalculatorBefore();
        int[] resultBefore = calculatorBefore.calculate(10, 5);
        System.out.println(java.util.Arrays.toString(resultBefore)); // [15, 5, 50, 2]

        System.out.println();

        Calculator calculator = new Calculator();
        int[] result = calculator.calculate(10, 5);
        System.out.println(java.util.Arrays.toString(result)); // [15, 5, 50, 2]
    }
}
