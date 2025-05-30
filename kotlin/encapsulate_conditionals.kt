// Encapsulate Conditionals
// Extract complex conditionals into functions that convey the intent of the condition.
// Create names that reveal the intent of the conditional.

class User {
    val age = 25
    private val children = false
    private val isPremium = false
    private val coupon = false

    fun hasChildren(): Boolean = children
    fun premiumMember(): Boolean = isPremium
    fun hasCoupon(): Boolean = coupon
}

// Before
fun checkAvailabilityBefore(user: User) {
    if (user.age > 18 && !user.hasChildren() && (user.premiumMember() || user.hasCoupon())) {
        println("User is available for the offer.")
    } else {
        println("User is not available for the offer.")
    }
}

// After
fun checkAvailability(user: User) {
    if (isAvailable(user)) {
        println("User is available for the offer.")
    } else {
        println("User is not available for the offer.")
    }
}

private fun isAvailable(user: User): Boolean {
    if (user.age <= 18) return false
    if (user.hasChildren()) return false
    if (user.premiumMember()) return true
    if (user.hasCoupon()) return true
    return false
}

fun main() {
    val user = User()
    
    checkAvailabilityBefore(user)
    println()
    checkAvailability(user)
}
