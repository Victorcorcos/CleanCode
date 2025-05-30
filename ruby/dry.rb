# DRY (Don't Repeat Yourself)
# If a piece of code is identical or very similar to another, try to extract it into a generalized function

# Before
def greet_morning
  puts "Good morning, Alice!"
end

def greet_afternoon
  puts "Good afternoon, Alice!"
end

def greet_evening
  puts "Good evening, Alice!"
end

greet_morning
greet_afternoon
greet_evening


# After
def greet(day_period, name)
  puts "Good #{day_period}, #{name}!"
end

greet("morning", "Alice")
greet("afternoon", "Alice")
greet("evening", "Alice")
