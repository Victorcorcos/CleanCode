# Delete Code > Create Code
# Prefer to delete code rather than create code.
# Sometimes even new features can be created by deleting code.

# Before
class NotificationService
  def send_notification(user, message)
    if user.email_notifications_enabled
      send_email(user.email, message)
    else
      puts "Email notifications are disabled for #{user.name}."
    end

    if user.sms_notifications_enabled
      send_sms(user.phone_number, message)
    else
      puts "SMS notifications are disabled for #{user.name}."
    end
  end

  private

  def send_email(email, message)
    # Code to send email
    puts "Email sent to #{email}: #{message}"
  end

  def send_sms(phone_number, message)
    # Code to send SMS
    puts "SMS sent to #{phone_number}: #{message}"
  end
end

class User
  attr_accessor :name, :email, :phone_number, :email_notifications_enabled, :sms_notifications_enabled

  def initialize(name, email, phone_number)
    @name = name
    @email = email
    @phone_number = phone_number
    @email_notifications_enabled = false
    @sms_notifications_enabled = false
  end
end

# Usage
user = User.new("Alice", "alice@example.com", "123-456-7890")
user.email_notifications_enabled = true
user.sms_notifications_enabled = true
service = NotificationService.new
service.send_notification(user, "Your order has been shipped.")


# After
class NotificationService
  def send_notification(user, message)
    send_email(user.email, message)
    send_sms(user.phone_number, message)
  end

  private

  def send_email(email, message)
    # Code to send email
    puts "Email sent to #{email}: #{message}"
  end

  def send_sms(phone_number, message)
    # Code to send SMS
    puts "SMS sent to #{phone_number}: #{message}"
  end
end

class User
  attr_accessor :name, :email, :phone_number

  def initialize(name, email, phone_number)
    @name = name
    @email = email
    @phone_number = phone_number
  end
end

# Usage
user = User.new("Alice", "alice@example.com", "123-456-7890")
service = NotificationService.new
service.send_notification(user, "Your order has been shipped.")
