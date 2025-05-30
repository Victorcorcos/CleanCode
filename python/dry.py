# DRY (Don't Repeat Yourself)
# If a piece of code is identical or very similar to another, try to extract it into a generalized function

# Before
def greet_morning():
    print("Good morning, Alice!")

def greet_afternoon():
    print("Good afternoon, Alice!")

def greet_evening():
    print("Good evening, Alice!")

greet_morning()
greet_afternoon()
greet_evening()


# After
def greet(day_period, name):
    print(f"Good {day_period}, {name}!")

greet("morning", "Alice")
greet("afternoon", "Alice")
greet("evening", "Alice")
