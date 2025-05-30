# YAGNI (You Ain't Gonna Need It)
# Don't build a cannon to kill a fly; you might not even need it afterward.

# Before
class User:
    def __init__(self, name, email):
        self.name = name
        self.email = email
        self.age = None  # Unused feature
        self.address = None  # Unused feature
        self.phone_number = None  # Unused feature

    def send_welcome_email(self):
        print(f"Welcome, {self.name}! A welcome email has been sent to {self.email}.")

user = User("Alice", "alice@example.com")
user.send_welcome_email()


# After
class User:
    def __init__(self, name, email):
        self.name = name
        self.email = email

    def send_welcome_email(self):
        print(f"Welcome, {self.name}! A welcome email has been sent to {self.email}.")

user = User("Alice", "alice@example.com")
user.send_welcome_email()
