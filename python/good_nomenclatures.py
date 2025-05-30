# Good Nomenclatures
# Use descriptive variable names that reveal intent.
# Use pronounceable and easily searchable names.
# Use conventions (related to the language, the business, and the organization/team's communication).

# Before
def fact(n):
    if n <= 1:
        return 1
    else:
        return n * fact(n - 1)

x = 5
y = fact(x)
print(y)  # Outputs: 120


# After
def factorial(number):
    if number <= 1:
        return 1
    else:
        return number * factorial(number - 1)

number = 5
result = factorial(number)
print(result)  # Outputs: 120
