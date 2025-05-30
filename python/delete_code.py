# Delete Code > Create Code
# Prefer to delete code rather than create code.
# Sometimes even new features can be created by deleting code.

# Before
class NotificationService:
    def send_notification(self, user, message):
        if user.email_notifications_enabled:
            self._send_email(user.email, message)
        else:
            print(f"Email notifications are disabled for {user.name}.")

        if user.sms_notifications_enabled:
            self._send_sms(user.phone_number, message)
        else:
            print(f"SMS notifications are disabled for {user.name}.")

    def _send_email(self, email, message):
        # Code to send email
        print(f"Email sent to {email}: {message}")

    def _send_sms(self, phone_number, message):
        # Code to send SMS
        print(f"SMS sent to {phone_number}: {message}")

class User:
    def __init__(self, name, email, phone_number):
        self.name = name
        self.email = email
        self.phone_number = phone_number
        self.email_notifications_enabled = False
        self.sms_notifications_enabled = False

# Usage
user = User("Alice", "alice@example.com", "123-456-7890")
user.email_notifications_enabled = True
user.sms_notifications_enabled = True
service = NotificationService()
service.send_notification(user, "Your order has been shipped.")


# After
class NotificationService:
    def send_notification(self, user, message):
        self._send_email(user.email, message)
        self._send_sms(user.phone_number, message)

    def _send_email(self, email, message):
        # Code to send email
        print(f"Email sent to {email}: {message}")

    def _send_sms(self, phone_number, message):
        # Code to send SMS
        print(f"SMS sent to {phone_number}: {message}")

class User:
    def __init__(self, name, email, phone_number):
        self.name = name
        self.email = email
        self.phone_number = phone_number

# Usage
user = User("Alice", "alice@example.com", "123-456-7890")
service = NotificationService()
service.send_notification(user, "Your order has been shipped.")
