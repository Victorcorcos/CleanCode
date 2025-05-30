// SRP (Single Responsibility Principle)
// Separate the code into simple, well-defined, well-intentioned tasks and give clear names.

import 'dart:convert';

// Before
class ReportGeneratorBefore {
  void generateReport(List<String> data) {
    // Process the data
    List<String> processedData = data.map((item) => item.toUpperCase()).toList();

    // Convert data to JSON
    String jsonData = jsonEncode(processedData);

    // Save the report to a file (simulated)
    print("Saving to file: $jsonData");

    // Send the report via email (simulated)
    print("Email sent with data: $jsonData");
  }
}

// After
class ReportGenerator {
  void generateReport(List<String> data) {
    List<String> processedData = _processData(data);
    String jsonData = _convertToJson(processedData);
    _saveReport(jsonData);
    _sendReport(jsonData);
  }

  List<String> _processData(List<String> data) {
    return data.map((item) => item.toUpperCase()).toList();
  }

  String _convertToJson(List<String> data) {
    return jsonEncode(data);
  }

  void _saveReport(String jsonData) {
    print("Saving to file: $jsonData");
  }

  void _sendReport(String jsonData) {
    print("Email sent with data: $jsonData");
  }
}

void main() {
  List<String> data = ["a", "b", "c", "d"];
  
  var reportBefore = ReportGeneratorBefore();
  reportBefore.generateReport(data);

  print("");

  var report = ReportGenerator();
  report.generateReport(data);
}
