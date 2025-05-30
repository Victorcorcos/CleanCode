# Avoid Comments
# Prefer to avoid comments rather than to write them
# If a comment is truly necessary, explain the "why" not the "what".

# Before
import math

class Calculator:
    def calculate_area(self, radius):
        # Calculate the area of a circle
        area = math.pi * radius ** 2

        # Round the area to two decimal places
        area = round(area, 2)

        return area

calculator = Calculator()
print(calculator.calculate_area(5))  # Outputs: 78.54


# After
import math

class Calculator:
    def calculate_area(self, radius):
        area = self._circle_area(radius)
        area = round(area, 2)
        return area

    def _circle_area(self, radius):
        return math.pi * radius ** 2

calculator = Calculator()
print(calculator.calculate_area(5))  # Outputs: 78.54
