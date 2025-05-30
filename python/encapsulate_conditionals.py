# Encapsulate Conditionals
# Extract complex conditionals into functions that convey the intent of the condition.
# Create names that reveal the intent of the conditional.

# Before
class User:
    def __init__(self):
        self.age = 25
        self.children = False
        self.is_premium = False
        self.coupon = False

    def has_children(self):
        return self.children

    def premium_member(self):
        return self.is_premium

    def has_coupon(self):
        return self.coupon

def check_availability(user):
    if user.age > 18 and not user.has_children() and (user.premium_member() or user.has_coupon()):
        print("User is available for the offer.")
    else:
        print("User is not available for the offer.")

user = User()
check_availability(user)


# After
class User:
    def __init__(self):
        self.age = 25
        self.children = False
        self.is_premium = False
        self.coupon = False

    def has_children(self):
        return self.children

    def premium_member(self):
        return self.is_premium

    def has_coupon(self):
        return self.coupon

def check_availability(user):
    if _is_available(user):
        print("User is available for the offer.")
    else:
        print("User is not available for the offer.")

def _is_available(user):
    if user.age <= 18:
        return False
    if user.has_children():
        return False
    if user.premium_member():
        return True
    if user.has_coupon():
        return True
    return False

user = User()
check_availability(user)
