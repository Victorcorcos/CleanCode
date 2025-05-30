# Encapsulate Conditionals
# Extract complex conditionals into functions that convey the intent of the condition.
# Create names that reveal the intent of the conditional.

# Before
def check_availability(user)
  if user.age > 18 && !user.has_children? && (user.premium_member? || user.has_coupon?)
    puts "User is available for the offer."
  else
    puts "User is not available for the offer."
  end
end

user = User.new
check_availability(user)


# After
def check_availability(user)
  if available?(user)
    puts "User is available for the offer."
  else
    puts "User is not available for the offer."
  end
end

private

def available?(user)
  return false if user.age <= 18
  return false if user.has_children?
  return true if user.premium_member?
  return true if user.has_coupon?

  false
end

user = User.new
check_availability(user)
