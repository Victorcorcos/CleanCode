# Good Nomenclatures
# Use descriptive variable names that reveal intent.
# Use pronounceable and easily searchable names.
# Use conventions (related to the language, the business, and the organization/team's communication).

# Before
def fact(n)
  if n <= 1
    1
  else
    n * fact(n - 1)
  end
end

x = 5
y = fact(x)
puts y # Outputs: 120


# After
def factorial(number)
  if number <= 1
    1
  else
    number * factorial(number - 1)
  end
end

number = 5
result = factorial(number)
puts result # Outputs: 120
