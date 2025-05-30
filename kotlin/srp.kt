// SRP (Single Responsibility Principle)
// Separate the code into simple, well-defined, well-intentioned tasks and give clear names.

import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.Json

// Before
class ReportGeneratorBefore {
    fun generateReport(data: List<String>) {
        // Process the data
        val processedData = data.map { it.uppercase() }

        // Convert data to JSON
        val jsonData = Json.encodeToString(processedData)

        // Save the report to a file (simulated)
        println("Saving to file: $jsonData")

        // Send the report via email (simulated)
        println("Email sent with data: $jsonData")
    }
}

// After
class ReportGenerator {
    fun generateReport(data: List<String>) {
        val processedData = processData(data)
        val jsonData = convertToJson(processedData)
        saveReport(jsonData)
        sendReport(jsonData)
    }

    private fun processData(data: List<String>): List<String> {
        return data.map { it.uppercase() }
    }

    private fun convertToJson(data: List<String>): String {
        return Json.encodeToString(data)
    }

    private fun saveReport(jsonData: String) {
        println("Saving to file: $jsonData")
    }

    private fun sendReport(jsonData: String) {
        println("Email sent with data: $jsonData")
    }
}

fun main() {
    val data = listOf("a", "b", "c", "d")
    
    val reportBefore = ReportGeneratorBefore()
    reportBefore.generateReport(data)

    println()

    val report = ReportGenerator()
    report.generateReport(data)
}
