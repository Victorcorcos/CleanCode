// KISS (Keep It Simple Stupid)
// Try to make the code so "stupid" that a 5-year-old could understand it.

package main

import "fmt"

// Before
func calculateDiscountBefore(price float64) float64 {
	var discount float64
	if price > 100 {
		if price < 200 {
			discount = 10
		} else {
			discount = 20
		}
	} else {
		discount = 0
	}
	discountedPrice := price - (price * discount / 100)
	return discountedPrice
}

// After
func calculateDiscount(price float64) float64 {
	var discount float64
	if price <= 100 {
		discount = 0
	} else if price <= 200 {
		discount = 10
	} else {
		discount = 20
	}
	
	return price - (price * discount / 100)
}

func main() {
	fmt.Println(calculateDiscountBefore(150))
	fmt.Println(calculateDiscountBefore(50))
	fmt.Println(calculateDiscountBefore(250))

	fmt.Println()

	fmt.Println(calculateDiscount(150))
	fmt.Println(calculateDiscount(50))
	fmt.Println(calculateDiscount(250))
}
