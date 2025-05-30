# KISS (Keep It Simple Stupid)
# Try to make the code so "stupid" that a 5-year-old could understand it.

# Before
def calculate_discount(price):
    if price > 100:
        if price < 200:
            discount = 10
        else:
            discount = 20
    else:
        discount = 0
    discounted_price = price - (price * discount / 100)
    return discounted_price

print(calculate_discount(150))
print(calculate_discount(50))
print(calculate_discount(250))


# After
def calculate_discount(price):
    if price <= 100:
        discount = 0
    elif price <= 200:
        discount = 10
    else:
        discount = 20

    return price - (price * discount / 100)

print(calculate_discount(150))
print(calculate_discount(50))
print(calculate_discount(250))
