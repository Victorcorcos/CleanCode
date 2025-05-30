// Delete Code > Create Code
// Prefer to delete code rather than create code.
// Sometimes even new features can be created by deleting code.

// Before
class NotificationServiceBefore {
    fun sendNotification(user: UserBefore, message: String) {
        if (user.emailNotificationsEnabled) {
            sendEmail(user.email, message)
        } else {
            println("Email notifications are disabled for ${user.name}.")
        }

        if (user.smsNotificationsEnabled) {
            sendSms(user.phoneNumber, message)
        } else {
            println("SMS notifications are disabled for ${user.name}.")
        }
    }

    private fun sendEmail(email: String, message: String) {
        // Code to send email
        println("Email sent to $email: $message")
    }

    private fun sendSms(phoneNumber: String, message: String) {
        // Code to send SMS
        println("SMS sent to $phoneNumber: $message")
    }
}

class UserBefore(
    val name: String,
    val email: String,
    val phoneNumber: String
) {
    var emailNotificationsEnabled = false
    var smsNotificationsEnabled = false
}

// After
class NotificationService {
    fun sendNotification(user: User, message: String) {
        sendEmail(user.email, message)
        sendSms(user.phoneNumber, message)
    }

    private fun sendEmail(email: String, message: String) {
        // Code to send email
        println("Email sent to $email: $message")
    }

    private fun sendSms(phoneNumber: String, message: String) {
        // Code to send SMS
        println("SMS sent to $phoneNumber: $message")
    }
}

class User(
    val name: String,
    val email: String,
    val phoneNumber: String
)

fun main() {
    // Before usage
    val userBefore = UserBefore("Alice", "alice@example.com", "123-456-7890")
    userBefore.emailNotificationsEnabled = true
    userBefore.smsNotificationsEnabled = true
    val serviceBefore = NotificationServiceBefore()
    serviceBefore.sendNotification(userBefore, "Your order has been shipped.")

    println()

    // After usage
    val user = User("Alice", "alice@example.com", "123-456-7890")
    val service = NotificationService()
    service.sendNotification(user, "Your order has been shipped.")
}
