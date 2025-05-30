// Good Nomenclatures
// Use descriptive variable names that reveal intent.
// Use pronounceable and easily searchable names.
// Use conventions (related to the language, the business, and the organization/team's communication).

package main

import "fmt"

// Before
func fact(n int) int {
	if n <= 1 {
		return 1
	} else {
		return n * fact(n-1)
	}
}

// After
func factorial(number int) int {
	if number <= 1 {
		return 1
	} else {
		return number * factorial(number-1)
	}
}

func main() {
	// Before
	x := 5
	y := fact(x)
	fmt.Println(y) // Outputs: 120

	fmt.Println()

	// After
	number := 5
	result := factorial(number)
	fmt.Println(result) // Outputs: 120
}
