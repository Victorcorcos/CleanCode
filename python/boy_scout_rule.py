# Boy Scout Rule
# Always leave the campsite cleaner than you found it.
# Take the time to apply Clean Code principles to small parts of the code as you program.
# Over time, you will find the codebase much cleaner than when you found it!

# Before
def print_user_info(user):
    print("Name: " + user["name"])
    print("Email: " + user["email"])
    if user["age"] != None:
        print("Age: " + str(user["age"]))

user = {"name": "Alice", "email": "alice@example.com", "age": 30}
print_user_info(user)


# After
def print_user_info(user):
    print(f"Name: {user['name']}")
    print(f"Email: {user['email']}")
    if user["age"]:
        print(f"Age: {user['age']}")

user = {"name": "Alice", "email": "alice@example.com", "age": 30}
print_user_info(user)
