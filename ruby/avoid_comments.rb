# Avoid Comments
# Prefer to avoid comments rather than to write them
# If a comment is truly necessary, explain the "why" not the "what".

# Before
class Calculator
  def calculate_area(radius)
    # Calculate the area of a circle
    area = Math::PI * radius ** 2

    # Round the area to two decimal places
    area = area.round(2)

    area
  end
end

calculator = Calculator.new
puts calculator.calculate_area(5) # Outputs: 78.54


# After
class Calculator
  def calculate_area(radius)
    area = circle_area(radius)
    area = area.round(2)
    area
  end

  private

  def circle_area(radius)
    Math::PI * radius ** 2
  end
end

calculator = Calculator.new
puts calculator.calculate_area(5) # Outputs: 78.54
