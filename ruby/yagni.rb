# YAGNI (You Ain't Gonna Need It)
# Don't build a cannon to kill a fly; you might not even need it afterward.

# Before
class User
  attr_accessor :name, :email, :age, :address, :phone_number

  def initialize(name, email)
    @name = name
    @email = email
    @age = nil  # Unused feature
    @address = nil  # Unused feature
    @phone_number = nil  # Unused feature
  end

  def send_welcome_email
    puts "Welcome, #{name}! A welcome email has been sent to #{email}."
  end
end

user = User.new("Alice", "alice@example.com")
user.send_welcome_email


# After
class User
  attr_accessor :name, :email

  def initialize(name, email)
    @name = name
    @email = email
  end

  def send_welcome_email
    puts "Welcome, #{name}! A welcome email has been sent to #{email}."
  end
end

user = User.new("Alice", "alice@example.com")
user.send_welcome_email
