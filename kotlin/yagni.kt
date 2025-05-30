// YAGNI (You Ain't Gonna Need It)
// Don't build a cannon to kill a fly; you might not even need it afterward.

// Before
class UserBefore(
    val name: String,
    val email: String
) {
    var age: Int? = null  // Unused feature
    var address: String? = null  // Unused feature
    var phoneNumber: String? = null  // Unused feature

    fun sendWelcomeEmail() {
        println("Welcome, $name! A welcome email has been sent to $email.")
    }
}

// After
class User(
    val name: String,
    val email: String
) {
    fun sendWelcomeEmail() {
        println("Welcome, $name! A welcome email has been sent to $email.")
    }
}

fun main() {
    val userBefore = UserBefore("Alice", "alice@example.com")
    userBefore.sendWelcomeEmail()

    println()

    val user = User("Alice", "alice@example.com")
    user.sendWelcomeEmail()
}
