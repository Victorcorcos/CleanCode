// SRP (Single Responsibility Principle)
// Separate the code into simple, well-defined, well-intentioned tasks and give clear names.

// Before
class ReportGenerator {
  generateReport(data) {
    // Process the data
    const processedData = data.map(item => item.toUpperCase());

    // Convert data to JSON
    const jsonData = JSON.stringify(processedData);

    // Save the report to a file (simulated)
    console.log(`Saving to file: ${jsonData}`);

    // Send the report via email (simulated)
    console.log(`Email sent with data: ${jsonData}`);
  }
}

const data = ["a", "b", "c", "d"];
const report = new ReportGenerator();
report.generateReport(data);


// After
class ReportGenerator {
  generateReport(data) {
    const processedData = this._processData(data);
    const jsonData = this._convertToJson(processedData);
    this._saveReport(jsonData);
    this._sendReport(jsonData);
  }

  _processData(data) {
    return data.map(item => item.toUpperCase());
  }

  _convertToJson(data) {
    return JSON.stringify(data);
  }

  _saveReport(jsonData) {
    console.log(`Saving to file: ${jsonData}`);
  }

  _sendReport(jsonData) {
    console.log(`Email sent with data: ${jsonData}`);
  }
}

const data = ["a", "b", "c", "d"];
const report = new ReportGenerator();
report.generateReport(data);
