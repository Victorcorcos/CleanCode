# Avoid Negative Conditionals
# Positive conditionals reduce mental strain and make it easier to reason about the code.

# Before
class User:
    def __init__(self):
        self.is_admin = False
        self.is_premium = False

    def admin(self):
        return self.is_admin

    def premium_member(self):
        return self.is_premium

def check_access(user):
    if not user.admin():
        if not user.premium_member():
            print("Access denied.")
        else:
            print("Access granted.")
    else:
        print("Access granted.")

user = User()
check_access(user)


# After
class User:
    def __init__(self):
        self.is_admin = False
        self.is_premium = False

    def admin(self):
        return self.is_admin

    def premium_member(self):
        return self.is_premium

def check_access(user):
    if user.admin() or user.premium_member():
        print("Access granted.")
    else:
        print("Access denied.")

user = User()
check_access(user)
