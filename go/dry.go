// DRY (Don't Repeat Yourself)
// If a piece of code is identical or very similar to another, try to extract it into a generalized function

package main

import "fmt"

// Before
func greetMorning() {
	fmt.Println("Good morning, Alice!")
}

func greetAfternoon() {
	fmt.Println("Good afternoon, Alice!")
}

func greetEvening() {
	fmt.Println("Good evening, Alice!")
}

// After
func greet(dayPeriod, name string) {
	fmt.Printf("Good %s, %s!\n", dayPeriod, name)
}

func main() {
	// Before usage
	greetMorning()
	greetAfternoon()
	greetEvening()

	fmt.Println()

	// After usage
	greet("morning", "Alice")
	greet("afternoon", "Alice")
	greet("evening", "Alice")
}
