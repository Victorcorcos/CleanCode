// Avoid Comments
// Prefer to avoid comments rather than to write them
// If a comment is truly necessary, explain the "why" not the "what".

// Before
class Calculator {
  calculateArea(radius) {
    // Calculate the area of a circle
    let area = Math.PI * radius ** 2;

    // Round the area to two decimal places
    area = Math.round(area * 100) / 100;

    return area;
  }
}

const calculator = new Calculator();
console.log(calculator.calculateArea(5)); // Outputs: 78.54


// After
class Calculator {
  calculateArea(radius) {
    const area = this._circleArea(radius);
    return Math.round(area * 100) / 100;
  }

  _circleArea(radius) {
    return Math.PI * radius ** 2;
  }
}

const calculator = new Calculator();
console.log(calculator.calculateArea(5)); // Outputs: 78.54
