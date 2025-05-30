// KISS (Keep It Simple Stupid)
// Try to make the code so "stupid" that a 5-year-old could understand it.

using System;

public class Kiss
{
    // Before
    public static double CalculateDiscountBefore(double price)
    {
        double discount;
        if (price > 100)
        {
            if (price < 200)
            {
                discount = 10;
            }
            else
            {
                discount = 20;
            }
        }
        else
        {
            discount = 0;
        }
        double discountedPrice = price - (price * discount / 100);
        return discountedPrice;
    }

    // After
    public static double CalculateDiscount(double price)
    {
        double discount;
        if (price <= 100)
        {
            discount = 0;
        }
        else if (price <= 200)
        {
            discount = 10;
        }
        else
        {
            discount = 20;
        }
        
        return price - (price * discount / 100);
    }

    public static void Main(string[] args)
    {
        Console.WriteLine(CalculateDiscountBefore(150));
        Console.WriteLine(CalculateDiscountBefore(50));
        Console.WriteLine(CalculateDiscountBefore(250));

        Console.WriteLine();

        Console.WriteLine(CalculateDiscount(150));
        Console.WriteLine(CalculateDiscount(50));
        Console.WriteLine(CalculateDiscount(250));
    }
}
