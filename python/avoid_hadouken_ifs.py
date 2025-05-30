# Avoid Hadouken IFs
# Avoid nested IFs (Hadouken IFs)
# Solution: Early Returns, Switch-Cases

# Before
class Order:
    def __init__(self):
        self.is_valid = True
        self.is_in_stock = True
        self.payment_success = True

    def valid(self):
        return self.is_valid

    def in_stock(self):
        return self.is_in_stock

    def payment_successful(self):
        return self.payment_success

def process_order(order):
    if order.valid():
        if order.in_stock():
            if order.payment_successful():
                print("Order processed successfully!")
            else:
                print("Payment failed.")
        else:
            print("Item is out of stock.")
    else:
        print("Order is invalid.")

order = Order()
process_order(order)


# After
class Order:
    def __init__(self):
        self.is_valid = True
        self.is_in_stock = True
        self.payment_success = True

    def valid(self):
        return self.is_valid

    def in_stock(self):
        return self.is_in_stock

    def payment_successful(self):
        return self.payment_success

def process_order(order):
    if not order.valid():
        print("Order is invalid.")
        return

    if not order.in_stock():
        print("Item is out of stock.")
        return

    if not order.payment_successful():
        print("Payment failed.")
        return

    print("Order processed successfully!")

order = Order()
process_order(order)
