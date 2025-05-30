// Avoid Hadouken IFs
// Avoid nested IFs (Hadouken IFs)
// Solution: Early Returns, Switch-Cases

package main

import "fmt"

type Order struct {
	isValid        bool
	isInStock      bool
	paymentSuccess bool
}

func NewOrder() *Order {
	return &Order{
		isValid:        true,
		isInStock:      true,
		paymentSuccess: true,
	}
}

func (o *Order) Valid() bool {
	return o.isValid
}

func (o *Order) InStock() bool {
	return o.isInStock
}

func (o *Order) PaymentSuccessful() bool {
	return o.paymentSuccess
}

// Before
func processOrderBefore(order *Order) {
	if order.Valid() {
		if order.InStock() {
			if order.PaymentSuccessful() {
				fmt.Println("Order processed successfully!")
			} else {
				fmt.Println("Payment failed.")
			}
		} else {
			fmt.Println("Item is out of stock.")
		}
	} else {
		fmt.Println("Order is invalid.")
	}
}

// After
func processOrder(order *Order) {
	if !order.Valid() {
		fmt.Println("Order is invalid.")
		return
	}
	
	if !order.InStock() {
		fmt.Println("Item is out of stock.")
		return
	}
	
	if !order.PaymentSuccessful() {
		fmt.Println("Payment failed.")
		return
	}

	fmt.Println("Order processed successfully!")
}

func main() {
	order := NewOrder()
	
	processOrderBefore(order)
	fmt.Println()
	processOrder(order)
}
