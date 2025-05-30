# Avoid Flag Arguments
# Avoid providing boolean arguments (true/false) to functions or methods.
# You could pass a string with a clearer name (for example).

# Before
def greet(name, formal)
  if formal
    puts "Good evening, #{name}."
  else
    puts "Hi, #{name}!"
  end
end

greet("Alice", true)
greet("Bob", false)


# After
def greet(name, formality)
  case formality
  when "formal"
    puts "Good evening, #{name}."
  when "informal"
    puts "Hi, #{name}!"
  end
end

greet("Alice", "formal")
greet("Bob", "informal")
