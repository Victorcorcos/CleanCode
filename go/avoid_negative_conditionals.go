// Avoid Negative Conditionals
// Positive conditionals reduce mental strain and make it easier to reason about the code.

package main

import "fmt"

type User struct {
	isAdmin   bool
	isPremium bool
}

func NewUser() *User {
	return &User{
		isAdmin:   false,
		isPremium: false,
	}
}

func (u *User) Admin() bool {
	return u.isAdmin
}

func (u *User) PremiumMember() bool {
	return u.isPremium
}

// Before
func checkAccessBefore(user *User) {
	if !user.Admin() {
		if !user.PremiumMember() {
			fmt.Println("Access denied.")
		} else {
			fmt.Println("Access granted.")
		}
	} else {
		fmt.Println("Access granted.")
	}
}

// After
func checkAccess(user *User) {
	if user.Admin() || user.PremiumMember() {
		fmt.Println("Access granted.")
	} else {
		fmt.Println("Access denied.")
	}
}

func main() {
	user := NewUser()
	
	checkAccessBefore(user)
	fmt.Println()
	checkAccess(user)
}
