// Avoid Flag Arguments
// Avoid providing boolean arguments (true/false) to functions or methods.
// You could pass a string with a clearer name (for example).

// Before
fun greetBefore(name: String, formal: Boolean) {
    if (formal) {
        println("Good evening, $name.")
    } else {
        println("Hi, $name!")
    }
}

// After
fun greet(name: String, formality: String) {
    when (formality) {
        "formal" -> println("Good evening, $name.")
        "informal" -> println("Hi, $name!")
    }
}

fun main() {
    greetBefore("Alice", true)
    greetBefore("Bob", false)

    println()

    greet("Alice", "formal")
    greet("Bob", "informal")
}
