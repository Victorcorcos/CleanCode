// Boy Scout Rule
// Always leave the campsite cleaner than you found it.
// Take the time to apply Clean Code principles to small parts of the code as you program.
// Over time, you will find the codebase much cleaner than when you found it!

// Before
fun printUserInfoBefore(user: Map<String, Any?>) {
    println("Name: " + user["name"])
    println("Email: " + user["email"])
    if (user["age"] != null) {
        println("Age: " + user["age"].toString())
    }
}

// After
fun printUserInfo(user: Map<String, Any?>) {
    println("Name: ${user["name"]}")
    println("Email: ${user["email"]}")
    user["age"]?.let { println("Age: $it") }
}

fun main() {
    val user = mapOf(
        "name" to "Alice",
        "email" to "alice@example.com",
        "age" to 30
    )

    printUserInfoBefore(user)
    println()
    printUserInfo(user)
}
