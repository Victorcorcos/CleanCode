// Avoid Hadouken IFs
// Avoid nested IFs (Hadouken IFs)
// Solution: Early Returns, Switch-Cases

class Order {
    private val isValid = true
    private val isInStock = true
    private val paymentSuccess = true

    fun valid(): Boolean = isValid
    fun inStock(): Boolean = isInStock
    fun paymentSuccessful(): Boolean = paymentSuccess
}

// Before
fun processOrderBefore(order: Order) {
    if (order.valid()) {
        if (order.inStock()) {
            if (order.paymentSuccessful()) {
                println("Order processed successfully!")
            } else {
                println("Payment failed.")
            }
        } else {
            println("Item is out of stock.")
        }
    } else {
        println("Order is invalid.")
    }
}

// After
fun processOrder(order: Order) {
    if (!order.valid()) {
        println("Order is invalid.")
        return
    }
    
    if (!order.inStock()) {
        println("Item is out of stock.")
        return
    }
    
    if (!order.paymentSuccessful()) {
        println("Payment failed.")
        return
    }

    println("Order processed successfully!")
}

fun main() {
    val order = Order()
    
    processOrderBefore(order)
    println()
    processOrder(order)
}
