// YAGNI (You Ain't Gonna Need It)
// Don't build a cannon to kill a fly; you might not even need it afterward.

package main

import "fmt"

// Before
type UserBefore struct {
	Name        string
	Email       string
	Age         *int    // Unused feature
	Address     *string // Unused feature
	PhoneNumber *string // Unused feature
}

func NewUserBefore(name, email string) *UserBefore {
	return &UserBefore{
		Name:        name,
		Email:       email,
		Age:         nil,
		Address:     nil,
		PhoneNumber: nil,
	}
}

func (u *UserBefore) SendWelcomeEmail() {
	fmt.Printf("Welcome, %s! A welcome email has been sent to %s.\n", u.Name, u.Email)
}

// After
type User struct {
	Name  string
	Email string
}

func NewUser(name, email string) *User {
	return &User{
		Name:  name,
		Email: email,
	}
}

func (u *User) SendWelcomeEmail() {
	fmt.Printf("Welcome, %s! A welcome email has been sent to %s.\n", u.Name, u.Email)
}

func main() {
	userBefore := NewUserBefore("Alice", "alice@example.com")
	userBefore.SendWelcomeEmail()

	fmt.Println()

	user := NewUser("Alice", "alice@example.com")
	user.SendWelcomeEmail()
}
