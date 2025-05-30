# Avoid Flag Arguments
# Avoid providing boolean arguments (true/false) to functions or methods.
# You could pass a string with a clearer name (for example).

# Before
def greet(name, formal):
    if formal:
        print(f"Good evening, {name}.")
    else:
        print(f"Hi, {name}!")

greet("Alice", True)
greet("Bob", False)


# After
def greet(name, formality):
    if formality == "formal":
        print(f"Good evening, {name}.")
    elif formality == "informal":
        print(f"Hi, {name}!")

greet("Alice", "formal")
greet("Bob", "informal")
