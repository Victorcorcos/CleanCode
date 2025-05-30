// KISS (Keep It Simple Stupid)
// Try to make the code so "stupid" that a 5-year-old could understand it.

public class Kiss {
    // Before
    public static double calculateDiscountBefore(double price) {
        double discount;
        if (price > 100) {
            if (price < 200) {
                discount = 10;
            } else {
                discount = 20;
            }
        } else {
            discount = 0;
        }
        double discountedPrice = price - (price * discount / 100);
        return discountedPrice;
    }

    // After
    public static double calculateDiscount(double price) {
        double discount;
        if (price <= 100) {
            discount = 0;
        } else if (price <= 200) {
            discount = 10;
        } else {
            discount = 20;
        }
        
        return price - (price * discount / 100);
    }

    public static void main(String[] args) {
        System.out.println(calculateDiscountBefore(150));
        System.out.println(calculateDiscountBefore(50));
        System.out.println(calculateDiscountBefore(250));

        System.out.println();

        System.out.println(calculateDiscount(150));
        System.out.println(calculateDiscount(50));
        System.out.println(calculateDiscount(250));
    }
}
