// Avoid Negative Conditionals
// Positive conditionals reduce mental strain and make it easier to reason about the code.

class User {
    private val isAdmin = false
    private val isPremium = false

    fun admin(): Boolean = isAdmin
    fun premiumMember(): Boolean = isPremium
}

// Before
fun checkAccessBefore(user: User) {
    if (!user.admin()) {
        if (!user.premiumMember()) {
            println("Access denied.")
        } else {
            println("Access granted.")
        }
    } else {
        println("Access granted.")
    }
}

// After
fun checkAccess(user: User) {
    if (user.admin() || user.premiumMember()) {
        println("Access granted.")
    } else {
        println("Access denied.")
    }
}

fun main() {
    val user = User()
    
    checkAccessBefore(user)
    println()
    checkAccess(user)
}
