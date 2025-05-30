// Avoid Comments
// Prefer to avoid comments rather than to write them
// If a comment is truly necessary, explain the "why" not the "what".

import kotlin.math.PI
import kotlin.math.round

// Before
class CalculatorBefore {
    fun calculateArea(radius: Double): Double {
        // Calculate the area of a circle
        var area = PI * radius * radius

        // Round the area to two decimal places
        area = round(area * 100) / 100

        return area
    }
}

// After
class Calculator {
    fun calculateArea(radius: Double): Double {
        val area = circleArea(radius)
        return round(area * 100) / 100
    }

    private fun circleArea(radius: Double): Double {
        return PI * radius * radius
    }
}

fun main() {
    val calculatorBefore = CalculatorBefore()
    println(calculatorBefore.calculateArea(5.0)) // Outputs: 78.54

    println()

    val calculator = Calculator()
    println(calculator.calculateArea(5.0)) // Outputs: 78.54
}
