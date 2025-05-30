// Avoid Comments
// Prefer to avoid comments rather than to write them
// If a comment is truly necessary, explain the "why" not the "what".

package main

import (
	"fmt"
	"math"
)

// Before
type CalculatorBefore struct{}

func (c *CalculatorBefore) CalculateArea(radius float64) float64 {
	// Calculate the area of a circle
	area := math.Pi * radius * radius

	// Round the area to two decimal places
	area = math.Round(area*100) / 100

	return area
}

// After
type Calculator struct{}

func (c *Calculator) CalculateArea(radius float64) float64 {
	area := c.circleArea(radius)
	return math.Round(area*100) / 100
}

func (c *Calculator) circleArea(radius float64) float64 {
	return math.Pi * radius * radius
}

func main() {
	calculatorBefore := &CalculatorBefore{}
	fmt.Println(calculatorBefore.CalculateArea(5)) // Outputs: 78.54

	fmt.Println()

	calculator := &Calculator{}
	fmt.Println(calculator.CalculateArea(5)) // Outputs: 78.54
}
