# Boy Scout Rule
# Always leave the campsite cleaner than you found it.
# Take the time to apply Clean Code principles to small parts of the code as you program.
# Over time, you will find the codebase much cleaner than when you found it!

# Before
def print_user_info(user)
  puts "Name: " + user[:name]
  puts "Email: " + user[:email]
  if user[:age] != nil
    puts "Age: " + user[:age].to_s
  end
end

user = { name: "Alice", email: "alice@example.com", age: 30 }
print_user_info(user)


# After
def print_user_info(user)
  puts "Name: #{user[:name]}"
  puts "Email: #{user[:email]}"
  puts "Age: #{user[:age]}" if user[:age]
end

user = { name: "Alice", email: "alice@example.com", age: 30 }
print_user_info(user)
