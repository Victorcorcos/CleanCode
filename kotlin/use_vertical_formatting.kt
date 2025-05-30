// Use Vertical Formatting
// You should read your code from top to bottom.
// You should read your code without "jumping" over functions.
// Similar and dependent functions should be close vertically.

// Before
class CalculatorBefore {
    fun add(a: Int, b: Int): Int {
        return a + b
    }

    fun multiply(a: Int, b: Int): Int {
        return a * b
    }

    fun calculate(a: Int, b: Int): List<Int> {
        val sumResult = add(a, b)
        val difference = subtract(a, b)
        val product = multiply(a, b)
        val quotient = divide(a, b)
        return listOf(sumResult, difference, product, quotient)
    }

    fun divide(a: Int, b: Int): Int {
        return a / b
    }

    fun subtract(a: Int, b: Int): Int {
        return a - b
    }
}

// After
class Calculator {
    fun calculate(a: Int, b: Int): List<Int> {
        val sumResult = add(a, b)
        val difference = subtract(a, b)
        val product = multiply(a, b)
        val quotient = divide(a, b)
        return listOf(sumResult, difference, product, quotient)
    }

    fun add(a: Int, b: Int): Int {
        return a + b
    }

    fun subtract(a: Int, b: Int): Int {
        return a - b
    }

    fun multiply(a: Int, b: Int): Int {
        return a * b
    }

    fun divide(a: Int, b: Int): Int {
        return a / b
    }
}

fun main() {
    val calculatorBefore = CalculatorBefore()
    val resultBefore = calculatorBefore.calculate(10, 5)
    println(resultBefore) // [15, 5, 50, 2]

    println()

    val calculator = Calculator()
    val result = calculator.calculate(10, 5)
    println(result) // [15, 5, 50, 2]
}
