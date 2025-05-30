// Avoid Hadouken IFs
// Avoid nested IFs (Hadouken IFs)
// Solution: Early Returns, Switch-Cases

using System;

public class AvoidHadoukenIfs
{
    public class Order
    {
        private bool isValid = true;
        private bool isInStock = true;
        private bool paymentSuccess = true;

        public bool Valid()
        {
            return isValid;
        }

        public bool InStock()
        {
            return isInStock;
        }

        public bool PaymentSuccessful()
        {
            return paymentSuccess;
        }
    }

    // Before
    public static void ProcessOrderBefore(Order order)
    {
        if (order.Valid())
        {
            if (order.InStock())
            {
                if (order.PaymentSuccessful())
                {
                    Console.WriteLine("Order processed successfully!");
                }
                else
                {
                    Console.WriteLine("Payment failed.");
                }
            }
            else
            {
                Console.WriteLine("Item is out of stock.");
            }
        }
        else
        {
            Console.WriteLine("Order is invalid.");
        }
    }

    // After
    public static void ProcessOrder(Order order)
    {
        if (!order.Valid())
        {
            Console.WriteLine("Order is invalid.");
            return;
        }
        
        if (!order.InStock())
        {
            Console.WriteLine("Item is out of stock.");
            return;
        }
        
        if (!order.PaymentSuccessful())
        {
            Console.WriteLine("Payment failed.");
            return;
        }

        Console.WriteLine("Order processed successfully!");
    }

    public static void Main(string[] args)
    {
        var order = new Order();
        
        ProcessOrderBefore(order);
        Console.WriteLine();
        ProcessOrder(order);
    }
}
