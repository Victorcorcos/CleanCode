// SRP (Single Responsibility Principle)
// Separate the code into simple, well-defined, well-intentioned tasks and give clear names.

// Before
class ReportGenerator {
  generateReport(data: string[]): void {
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
  generateReport(data: string[]): void {
    const processedData = this._processData(data);
    const jsonData = this._convertToJson(processedData);
    this._saveReport(jsonData);
    this._sendReport(jsonData);
  }

  private _processData(data: string[]): string[] {
    return data.map(item => item.toUpperCase());
  }

  private _convertToJson(data: string[]): string {
    return JSON.stringify(data);
  }

  private _saveReport(jsonData: string): void {
    console.log(`Saving to file: ${jsonData}`);
  }

  private _sendReport(jsonData: string): void {
    console.log(`Email sent with data: ${jsonData}`);
  }
}

const data = ["a", "b", "c", "d"];
const report = new ReportGenerator();
report.generateReport(data);
