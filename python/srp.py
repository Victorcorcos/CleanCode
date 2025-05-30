# SRP (Single Responsibility Principle)
# Separate the code into simple, well-defined, well-intentioned tasks and give clear names.

# Before
import json

class ReportGenerator:
    def generate_report(self, data):
        # Process the data
        processed_data = [item.upper() for item in data]

        # Convert data to JSON
        json_data = json.dumps(processed_data)

        # Save the report to a file
        with open('report.json', 'w') as file:
            file.write(json_data)

        # Send the report via email
        print(f"Email sent with data: {json_data}")

data = ["a", "b", "c", "d"]
report = ReportGenerator()
report.generate_report(data)


# After
import json

class ReportGenerator:
    def generate_report(self, data):
        processed_data = self._process_data(data)
        json_data = self._convert_to_json(processed_data)
        self._save_report(json_data)
        self._send_report(json_data)

    def _process_data(self, data):
        return [item.upper() for item in data]

    def _convert_to_json(self, data):
        return json.dumps(data)

    def _save_report(self, json_data):
        with open('report.json', 'w') as file:
            file.write(json_data)

    def _send_report(self, json_data):
        print(f"Email sent with data: {json_data}")

data = ["a", "b", "c", "d"]
report = ReportGenerator()
report.generate_report(data)
