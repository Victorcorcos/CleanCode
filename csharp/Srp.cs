// SRP (Single Responsibility Principle)
// Separate the code into simple, well-defined, well-intentioned tasks and give clear names.

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.Json;

public class Srp
{
    // Before
    public class ReportGeneratorBefore
    {
        public void GenerateReport(List<string> data)
        {
            // Process the data
            var processedData = data.Select(item => item.ToUpper()).ToList();

            // Convert data to JSON
            var jsonData = JsonSerializer.Serialize(processedData);

            // Save the report to a file (simulated)
            Console.WriteLine($"Saving to file: {jsonData}");

            // Send the report via email (simulated)
            Console.WriteLine($"Email sent with data: {jsonData}");
        }
    }

    // After
    public class ReportGenerator
    {
        public void GenerateReport(List<string> data)
        {
            var processedData = ProcessData(data);
            var jsonData = ConvertToJson(processedData);
            SaveReport(jsonData);
            SendReport(jsonData);
        }

        private List<string> ProcessData(List<string> data)
        {
            return data.Select(item => item.ToUpper()).ToList();
        }

        private string ConvertToJson(List<string> data)
        {
            return JsonSerializer.Serialize(data);
        }

        private void SaveReport(string jsonData)
        {
            Console.WriteLine($"Saving to file: {jsonData}");
        }

        private void SendReport(string jsonData)
        {
            Console.WriteLine($"Email sent with data: {jsonData}");
        }
    }

    public static void Main(string[] args)
    {
        var data = new List<string> { "a", "b", "c", "d" };
        
        var reportBefore = new ReportGeneratorBefore();
        reportBefore.GenerateReport(data);

        Console.WriteLine();

        var report = new ReportGenerator();
        report.GenerateReport(data);
    }
}
