// SRP (Single Responsibility Principle)
// Separate the code into simple, well-defined, well-intentioned tasks and give clear names.

package main

import (
	"encoding/json"
	"fmt"
	"strings"
)

// Before
type ReportGeneratorBefore struct{}

func (r *ReportGeneratorBefore) GenerateReport(data []string) {
	// Process the data
	processedData := make([]string, len(data))
	for i, item := range data {
		processedData[i] = strings.ToUpper(item)
	}

	// Convert data to JSON
	jsonData, _ := json.Marshal(processedData)

	// Save the report to a file (simulated)
	fmt.Printf("Saving to file: %s\n", string(jsonData))

	// Send the report via email (simulated)
	fmt.Printf("Email sent with data: %s\n", string(jsonData))
}

// After
type ReportGenerator struct{}

func (r *ReportGenerator) GenerateReport(data []string) {
	processedData := r.processData(data)
	jsonData := r.convertToJSON(processedData)
	r.saveReport(jsonData)
	r.sendReport(jsonData)
}

func (r *ReportGenerator) processData(data []string) []string {
	processedData := make([]string, len(data))
	for i, item := range data {
		processedData[i] = strings.ToUpper(item)
	}
	return processedData
}

func (r *ReportGenerator) convertToJSON(data []string) string {
	jsonData, _ := json.Marshal(data)
	return string(jsonData)
}

func (r *ReportGenerator) saveReport(jsonData string) {
	fmt.Printf("Saving to file: %s\n", jsonData)
}

func (r *ReportGenerator) sendReport(jsonData string) {
	fmt.Printf("Email sent with data: %s\n", jsonData)
}

func main() {
	data := []string{"a", "b", "c", "d"}
	
	reportBefore := &ReportGeneratorBefore{}
	reportBefore.GenerateReport(data)

	fmt.Println()

	report := &ReportGenerator{}
	report.GenerateReport(data)
}
