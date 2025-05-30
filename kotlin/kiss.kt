// KISS (Keep It Simple Stupid)
// Try to make the code so "stupid" that a 5-year-old could understand it.

// Before
fun calculateDiscountBefore(price: Double): Double {
    val discount = if (price > 100) {
        if (price < 200) {
            10.0
        } else {
            20.0
        }
    } else {
        0.0
    }
    val discountedPrice = price - (price * discount / 100)
    return discountedPrice
}

// After
fun calculateDiscount(price: Double): Double {
    val discount = when {
        price <= 100 -> 0.0
        price <= 200 -> 10.0
        else -> 20.0
    }
    
    return price - (price * discount / 100)
}

fun main() {
    println(calculateDiscountBefore(150.0))
    println(calculateDiscountBefore(50.0))
    println(calculateDiscountBefore(250.0))

    println()

    println(calculateDiscount(150.0))
    println(calculateDiscount(50.0))
    println(calculateDiscount(250.0))
}
