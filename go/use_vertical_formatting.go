// Use Vertical Formatting
// You should read your code from top to bottom.
// You should read your code without "jumping" over functions.
// Similar and dependent functions should be close vertically.

package main

import "fmt"

// Before
type CalculatorBefore struct{}

func (c *CalculatorBefore) Add(a, b int) int {
	return a + b
}

func (c *CalculatorBefore) Multiply(a, b int) int {
	return a * b
}

func (c *CalculatorBefore) Calculate(a, b int) []int {
	sumResult := c.Add(a, b)
	difference := c.Subtract(a, b)
	product := c.Multiply(a, b)
	quotient := c.Divide(a, b)
	return []int{sumResult, difference, product, quotient}
}

func (c *CalculatorBefore) Divide(a, b int) int {
	return a / b
}

func (c *CalculatorBefore) Subtract(a, b int) int {
	return a - b
}

// After
type Calculator struct{}

func (c *Calculator) Calculate(a, b int) []int {
	sumResult := c.Add(a, b)
	difference := c.Subtract(a, b)
	product := c.Multiply(a, b)
	quotient := c.Divide(a,  b)
	return []int{sumResult, difference, product, quotient}
}

func (c *Calculator) Add(a, b int) int {
	return a + b
}

func (c *Calculator) Subtract(a, b int) int {
	return a - b
}

func (c *Calculator) Multiply(a, b int) int {
	return a * b
}

func (c *Calculator) Divide(a, b int) int {
	return a / b
}

func main() {
	calculatorBefore := &CalculatorBefore{}
	resultBefore := calculatorBefore.Calculate(10, 5)
	fmt.Println(resultBefore) // [15 5 50 2]

	fmt.Println()

	calculator := &Calculator{}
	result := calculator.Calculate(10, 5)
	fmt.Println(result) // [15 5 50 2]
}
