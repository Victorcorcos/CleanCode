# Avoid Negative Conditionals
# Positive conditionals reduce mental strain and make it easier to reason about the code.

# Before
def check_access(user)
  if !user.admin?
    if !user.premium_member?
      puts "Access denied."
    else
      puts "Access granted."
    end
  else
    puts "Access granted."
  end
end

user = User.new
check_access(user)


# After
def check_access(user)
  if user.admin? || user.premium_member?
    puts "Access granted."
  else
    puts "Access denied."
  end
end

user = User.new
check_access(user)
