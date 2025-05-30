# Use Vertical Formatting
# You should read your code from top to bottom.
# You should read your code without "jumping" over functions.
# Similar and dependent functions should be close vertically.

# Before
class Calculator:
    def add(self, a, b):
        return a + b

    def multiply(self, a, b):
        return a * b

    def calculate(self, a, b):
        sum_result = self.add(a, b)
        difference = self.subtract(a, b)
        product = self.multiply(a, b)
        quotient = self.divide(a, b)
        return [sum_result, difference, product, quotient]

    def divide(self, a, b):
        return a / b

    def subtract(self, a, b):
        return a - b

calculator = Calculator()
result = calculator.calculate(10, 5)
print(result)  # [15, 5, 50, 2.0]


# After
class Calculator:
    def calculate(self, a, b):
        sum_result = self.add(a, b)
        difference = self.subtract(a, b)
        product = self.multiply(a, b)
        quotient = self.divide(a, b)
        return [sum_result, difference, product, quotient]

    def add(self, a, b):
        return a + b

    def subtract(self, a, b):
        return a - b

    def multiply(self, a, b):
        return a * b

    def divide(self, a, b):
        return a / b

calculator = Calculator()
result = calculator.calculate(10, 5)
print(result)  # [15, 5, 50, 2.0]
