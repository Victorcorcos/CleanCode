# Avoid Hadouken IFs
# Avoid nested IFs (Hadouken IFs)
# Solution: Early Returns, Switch-Cases

# Before
def process_order(order)
  if order.valid?
    if order.in_stock?
      if order.payment_successful?
        puts "Order processed successfully!"
      else
        puts "Payment failed."
      end
    else
      puts "Item is out of stock."
    end
  else
    puts "Order is invalid."
  end
end

order = Order.new
process_order(order)


# After
def process_order(order)
  return puts "Order is invalid." unless order.valid?
  return puts "Item is out of stock." unless order.in_stock?
  return puts "Payment failed." unless order.payment_successful?

  puts "Order processed successfully!"
end

order = Order.new
process_order(order)
