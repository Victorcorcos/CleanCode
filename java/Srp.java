// SRP (Single Responsibility Principle)
// Separate the code into simple, well-defined, well-intentioned tasks and give clear names.

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class Srp {
    // Before
    static class ReportGeneratorBefore {
        public void generateReport(List<String> data) {
            // Process the data
            List<String> processedData = data.stream()
                .map(String::toUpperCase)
                .collect(Collectors.toList());

            // Convert data to JSON
            String jsonData = "[" + String.join(", ", processedData.stream()
                .map(item -> "\"" + item + "\"")
                .collect(Collectors.toList())) + "]";

            // Save the report to a file (simulated)
            System.out.println("Saving to file: " + jsonData);

            // Send the report via email (simulated)
            System.out.println("Email sent with data: " + jsonData);
        }
    }

    // After
    static class ReportGenerator {
        public void generateReport(List<String> data) {
            List<String> processedData = processData(data);
            String jsonData = convertToJson(processedData);
            saveReport(jsonData);
            sendReport(jsonData);
        }

        private List<String> processData(List<String> data) {
            return data.stream()
                .map(String::toUpperCase)
                .collect(Collectors.toList());
        }

        private String convertToJson(List<String> data) {
            return "[" + String.join(", ", data.stream()
                .map(item -> "\"" + item + "\"")
                .collect(Collectors.toList())) + "]";
        }

        private void saveReport(String jsonData) {
            System.out.println("Saving to file: " + jsonData);
        }

        private void sendReport(String jsonData) {
            System.out.println("Email sent with data: " + jsonData);
        }
    }

    public static void main(String[] args) {
        List<String> data = Arrays.asList("a", "b", "c", "d");
        
        ReportGeneratorBefore reportBefore = new ReportGeneratorBefore();
        reportBefore.generateReport(data);

        System.out.println();

        ReportGenerator report = new ReportGenerator();
        report.generateReport(data);
    }
}
