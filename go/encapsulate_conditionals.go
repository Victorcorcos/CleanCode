// Encapsulate Conditionals
// Extract complex conditionals into functions that convey the intent of the condition.
// Create names that reveal the intent of the conditional.

package main

import "fmt"

type User struct {
	Age       int
	Children  bool
	IsPremium bool
	Coupon    bool
}

func NewUser() *User {
	return &User{
		Age:       25,
		Children:  false,
		IsPremium: false,
		Coupon:    false,
	}
}

func (u *User) HasChildren() bool {
	return u.Children
}

func (u *User) PremiumMember() bool {
	return u.IsPremium
}

func (u *User) HasCoupon() bool {
	return u.Coupon
}

// Before
func checkAvailabilityBefore(user *User) {
	if user.Age > 18 && !user.HasChildren() && (user.PremiumMember() || user.HasCoupon()) {
		fmt.Println("User is available for the offer.")
	} else {
		fmt.Println("User is not available for the offer.")
	}
}

// After
func checkAvailability(user *User) {
	if isAvailable(user) {
		fmt.Println("User is available for the offer.")
	} else {
		fmt.Println("User is not available for the offer.")
	}
}

func isAvailable(user *User) bool {
	if user.Age <= 18 {
		return false
	}
	if user.HasChildren() {
		return false
	}
	if user.PremiumMember() {
		return true
	}
	if user.HasCoupon() {
		return true
	}
	return false
}

func main() {
	user := NewUser()
	
	checkAvailabilityBefore(user)
	fmt.Println()
	checkAvailability(user)
}
