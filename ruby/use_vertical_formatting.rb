# Use Vertical Formatting
# You should read your code from top to bottom.
# You should read your code without "jumping" over functions.
# Similar and dependent functions should be close vertically.

# Before
class Calculator
  def add(a, b)
    a + b
  end

  def multiply(a, b)
    a * b
  end

  def calculate(a, b)
    sum = add(a, b)
    difference = subtract(a, b)
    product = multiply(a, b)
    quotient = divide(a, b)
    [sum, difference, product, quotient]
  end

  def divide(a, b)
    a / b
  end

  def subtract(a, b)
    a - b
  end
end

calculator = Calculator.new
result = calculator.calculate(10, 5)
puts result # 15, 5, 50, 2


# After
class Calculator
  def calculate(a, b)
    sum = add(a, b)
    difference = subtract(a, b)
    product = multiply(a, b)
    quotient = divide(a, b)
    [sum, difference, product, quotient]
  end

  def add(a, b)
    a + b
  end

  def subtract(a, b)
    a - b
  end

  def multiply(a, b)
    a * b
  end

  def divide(a, b)
    a / b
  end
end

calculator = Calculator.new
result = calculator.calculate(10, 5)
puts result # 15, 5, 50, 2
