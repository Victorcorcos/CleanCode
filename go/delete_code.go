// Delete Code > Create Code
// Prefer to delete code rather than create code.
// Sometimes even new features can be created by deleting code.

package main

import "fmt"

// Before
type NotificationServiceBefore struct{}

func (n *NotificationServiceBefore) SendNotification(user *UserBefore, message string) {
	if user.EmailNotificationsEnabled {
		n.sendEmail(user.Email, message)
	} else {
		fmt.Printf("Email notifications are disabled for %s.\n", user.Name)
	}

	if user.SmsNotificationsEnabled {
		n.sendSms(user.PhoneNumber, message)
	} else {
		fmt.Printf("SMS notifications are disabled for %s.\n", user.Name)
	}
}

func (n *NotificationServiceBefore) sendEmail(email, message string) {
	// Code to send email
	fmt.Printf("Email sent to %s: %s\n", email, message)
}

func (n *NotificationServiceBefore) sendSms(phoneNumber, message string) {
	// Code to send SMS
	fmt.Printf("SMS sent to %s: %s\n", phoneNumber, message)
}

type UserBefore struct {
	Name                      string
	Email                     string
	PhoneNumber               string
	EmailNotificationsEnabled bool
	SmsNotificationsEnabled   bool
}

func NewUserBefore(name, email, phoneNumber string) *UserBefore {
	return &UserBefore{
		Name:                      name,
		Email:                     email,
		PhoneNumber:               phoneNumber,
		EmailNotificationsEnabled: false,
		SmsNotificationsEnabled:   false,
	}
}

// After
type NotificationService struct{}

func (n *NotificationService) SendNotification(user *User, message string) {
	n.sendEmail(user.Email, message)
	n.sendSms(user.PhoneNumber, message)
}

func (n *NotificationService) sendEmail(email, message string) {
	// Code to send email
	fmt.Printf("Email sent to %s: %s\n", email, message)
}

func (n *NotificationService) sendSms(phoneNumber, message string) {
	// Code to send SMS
	fmt.Printf("SMS sent to %s: %s\n", phoneNumber, message)
}

type User struct {
	Name        string
	Email       string
	PhoneNumber string
}

func NewUser(name, email, phoneNumber string) *User {
	return &User{
		Name:        name,
		Email:       email,
		PhoneNumber: phoneNumber,
	}
}

func main() {
	// Before usage
	userBefore := NewUserBefore("Alice", "alice@example.com", "123-456-7890")
	userBefore.EmailNotificationsEnabled = true
	userBefore.SmsNotificationsEnabled = true
	serviceBefore := &NotificationServiceBefore{}
	serviceBefore.SendNotification(userBefore, "Your order has been shipped.")

	fmt.Println()

	// After usage
	user := NewUser("Alice", "alice@example.com", "123-456-7890")
	service := &NotificationService{}
	service.SendNotification(user, "Your order has been shipped.")
}
