// Avoid Hadouken IFs
// Avoid nested IFs (Hadouken IFs)
// Solution: Early Returns, Switch-Cases

public class AvoidHadoukenIfs {
    static class Order {
        private boolean isValid = true;
        private boolean isInStock = true;
        private boolean paymentSuccess = true;

        public boolean valid() {
            return isValid;
        }

        public boolean inStock() {
            return isInStock;
        }

        public boolean paymentSuccessful() {
            return paymentSuccess;
        }
    }

    // Before
    public static void processOrderBefore(Order order) {
        if (order.valid()) {
            if (order.inStock()) {
                if (order.paymentSuccessful()) {
                    System.out.println("Order processed successfully!");
                } else {
                    System.out.println("Payment failed.");
                }
            } else {
                System.out.println("Item is out of stock.");
            }
        } else {
            System.out.println("Order is invalid.");
        }
    }

    // After
    public static void processOrder(Order order) {
        if (!order.valid()) {
            System.out.println("Order is invalid.");
            return;
        }
        
        if (!order.inStock()) {
            System.out.println("Item is out of stock.");
            return;
        }
        
        if (!order.paymentSuccessful()) {
            System.out.println("Payment failed.");
            return;
        }

        System.out.println("Order processed successfully!");
    }

    public static void main(String[] args) {
        Order order = new Order();
        
        processOrderBefore(order);
        System.out.println();
        processOrder(order);
    }
}
