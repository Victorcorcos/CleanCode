// Avoid Flag Arguments
// Avoid providing boolean arguments (true/false) to functions or methods.
// You could pass a string with a clearer name (for example).

package main

import "fmt"

// Before
func greetBefore(name string, formal bool) {
	if formal {
		fmt.Printf("Good evening, %s.\n", name)
	} else {
		fmt.Printf("Hi, %s!\n", name)
	}
}

// After
func greet(name, formality string) {
	switch formality {
	case "formal":
		fmt.Printf("Good evening, %s.\n", name)
	case "informal":
		fmt.Printf("Hi, %s!\n", name)
	}
}

func main() {
	greetBefore("Alice", true)
	greetBefore("Bob", false)

	fmt.Println()

	greet("Alice", "formal")
	greet("Bob", "informal")
}
