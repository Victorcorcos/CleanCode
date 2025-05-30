// Avoid Comments
// Prefer to avoid comments rather than to write them
// If a comment is truly necessary, explain the "why" not the "what".

public class AvoidComments {
    // Before
    static class CalculatorBefore {
        public double calculateArea(double radius) {
            // Calculate the area of a circle
            double area = Math.PI * radius * radius;

            // Round the area to two decimal places
            area = Math.round(area * 100.0) / 100.0;

            return area;
        }
    }

    // After
    static class Calculator {
        public double calculateArea(double radius) {
            double area = circleArea(radius);
            return Math.round(area * 100.0) / 100.0;
        }

        private double circleArea(double radius) {
            return Math.PI * radius * radius;
        }
    }

    public static void main(String[] args) {
        CalculatorBefore calculatorBefore = new CalculatorBefore();
        System.out.println(calculatorBefore.calculateArea(5)); // Outputs: 78.54

        System.out.println();

        Calculator calculator = new Calculator();
        System.out.println(calculator.calculateArea(5)); // Outputs: 78.54
    }
}
