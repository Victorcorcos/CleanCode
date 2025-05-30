// DRY (Don't Repeat Yourself)
// If a piece of code is identical or very similar to another, try to extract it into a generalized function

// Before
fun greetMorning() {
    println("Good morning, Alice!")
}

fun greetAfternoon() {
    println("Good afternoon, Alice!")
}

fun greetEvening() {
    println("Good evening, Alice!")
}

// After
fun greet(dayPeriod: String, name: String) {
    println("Good $dayPeriod, $name!")
}

fun main() {
    // Before usage
    greetMorning()
    greetAfternoon()
    greetEvening()

    println()

    // After usage
    greet("morning", "Alice")
    greet("afternoon", "Alice")
    greet("evening", "Alice")
}
