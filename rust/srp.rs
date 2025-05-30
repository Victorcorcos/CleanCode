// SRP (Single Responsibility Principle)
// Separate the code into simple, well-defined, well-intentioned tasks and give clear names.

// Before
struct ReportGeneratorBefore;

impl ReportGeneratorBefore {
    fn generate_report(&self, data: Vec<String>) {
        // Process the data
        let processed_data: Vec<String> = data.iter().map(|item| item.to_uppercase()).collect();

        // Convert data to JSON (simplified)
        let json_data = format!("[{}]", processed_data.iter()
            .map(|item| format!("\"{}\"", item))
            .collect::<Vec<_>>()
            .join(", "));

        // Save the report to a file (simulated)
        println!("Saving to file: {}", json_data);

        // Send the report via email (simulated)
        println!("Email sent with data: {}", json_data);
    }
}

// After
struct ReportGenerator;

impl ReportGenerator {
    fn generate_report(&self, data: Vec<String>) {
        let processed_data = self.process_data(data);
        let json_data = self.convert_to_json(processed_data);
        self.save_report(&json_data);
        self.send_report(&json_data);
    }

    fn process_data(&self, data: Vec<String>) -> Vec<String> {
        data.iter().map(|item| item.to_uppercase()).collect()
    }

    fn convert_to_json(&self, data: Vec<String>) -> String {
        format!("[{}]", data.iter()
            .map(|item| format!("\"{}\"", item))
            .collect::<Vec<_>>()
            .join(", "))
    }

    fn save_report(&self, json_data: &str) {
        println!("Saving to file: {}", json_data);
    }

    fn send_report(&self, json_data: &str) {
        println!("Email sent with data: {}", json_data);
    }
}

fn main() {
    let data = vec!["a".to_string(), "b".to_string(), "c".to_string(), "d".to_string()];
    
    let report_before = ReportGeneratorBefore;
    report_before.generate_report(data.clone());

    println!();

    let report = ReportGenerator;
    report.generate_report(data);
}
