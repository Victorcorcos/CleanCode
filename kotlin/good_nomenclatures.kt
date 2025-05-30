// Good Nomenclatures
// Use descriptive variable names that reveal intent.
// Use pronounceable and easily searchable names.
// Use conventions (related to the language, the business, and the organization/team's communication).

// Before
fun fact(n: Int): Int {
    return if (n <= 1) {
        1
    } else {
        n * fact(n - 1)
    }
}

// After
fun factorial(number: Int): Int {
    return if (number <= 1) {
        1
    } else {
        number * factorial(number - 1)
    }
}

fun main() {
    // Before
    val x = 5
    val y = fact(x)
    println(y) // Outputs: 120

    println()

    // After
    val number = 5
    val result = factorial(number)
    println(result) // Outputs: 120
}
