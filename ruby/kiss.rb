# KISS (Keep It Simple Stupid)
# Try to make the code so "stupid" that a 5-year-old could understand it.

# Before
def calculate_discount(price)
  if price > 100
    if price < 200
      discount = 10
    else
      discount = 20
    end
  else
    discount = 0
  end
  discounted_price = price - (price * discount / 100)
  return discounted_price
end

puts calculate_discount(150)
puts calculate_discount(50)
puts calculate_discount(250)


# After
def calculate_discount(price)
  discount = case price
             when 0..100 then 0
             when 101..200 then 10
             else 20
             end
  price - (price * discount / 100)
end

puts calculate_discount(150)
puts calculate_discount(50)
puts calculate_discount(250)
