// SRP (Single Responsibility Principle)
// Separate the code into simple, well-defined, well-intentioned tasks and give clear names.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Before
class ReportGeneratorBefore {
public:
    void generateReport(const std::vector<std::string>& data) {
        // Process the data
        std::vector<std::string> processedData;
        for (const auto& item : data) {
            std::string processed = item;
            std::transform(processed.begin(), processed.end(), processed.begin(), ::toupper);
            processedData.push_back(processed);
        }

        // Convert data to JSON (simplified)
        std::cout << "Saving to file: [";
        for (size_t i = 0; i < processedData.size(); ++i) {
            std::cout << "\"" << processedData[i] << "\"";
            if (i < processedData.size() - 1) std::cout << ", ";
        }
        std::cout << "]" << std::endl;

        // Send the report via email (simulated)
        std::cout << "Email sent with data: [";
        for (size_t i = 0; i < processedData.size(); ++i) {
            std::cout << "\"" << processedData[i] << "\"";
            if (i < processedData.size() - 1) std::cout << ", ";
        }
        std::cout << "]" << std::endl;
    }
};

// After
class ReportGenerator {
public:
    void generateReport(const std::vector<std::string>& data) {
        auto processedData = processData(data);
        auto jsonData = convertToJson(processedData);
        saveReport(jsonData);
        sendReport(jsonData);
    }

private:
    std::vector<std::string> processData(const std::vector<std::string>& data) {
        std::vector<std::string> processedData;
        for (const auto& item : data) {
            std::string processed = item;
            std::transform(processed.begin(), processed.end(), processed.begin(), ::toupper);
            processedData.push_back(processed);
        }
        return processedData;
    }

    std::string convertToJson(const std::vector<std::string>& data) {
        std::string json = "[";
        for (size_t i = 0; i < data.size(); ++i) {
            json += "\"" + data[i] + "\"";
            if (i < data.size() - 1) json += ", ";
        }
        json += "]";
        return json;
    }

    void saveReport(const std::string& jsonData) {
        std::cout << "Saving to file: " << jsonData << std::endl;
    }

    void sendReport(const std::string& jsonData) {
        std::cout << "Email sent with data: " << jsonData << std::endl;
    }
};

int main() {
    std::vector<std::string> data = {"a", "b", "c", "d"};
    
    ReportGeneratorBefore reportBefore;
    reportBefore.generateReport(data);

    std::cout << std::endl;

    ReportGenerator report;
    report.generateReport(data);

    return 0;
}
