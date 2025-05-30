// Boy Scout Rule
// Always leave the campsite cleaner than you found it.
// Take the time to apply Clean Code principles to small parts of the code as you program.
// Over time, you will find the codebase much cleaner than when you found it!

package main

import (
	"fmt"
	"strconv"
)

// Before
func printUserInfoBefore(user map[string]interface{}) {
	fmt.Println("Name: " + user["name"].(string))
	fmt.Println("Email: " + user["email"].(string))
	if user["age"] != nil {
		fmt.Println("Age: " + strconv.Itoa(user["age"].(int)))
	}
}

// After
func printUserInfo(user map[string]interface{}) {
	fmt.Printf("Name: %s\n", user["name"])
	fmt.Printf("Email: %s\n", user["email"])
	if user["age"] != nil {
		fmt.Printf("Age: %d\n", user["age"])
	}
}

func main() {
	user := map[string]interface{}{
		"name":  "Alice",
		"email": "alice@example.com",
		"age":   30,
	}

	printUserInfoBefore(user)
	fmt.Println()
	printUserInfo(user)
}
