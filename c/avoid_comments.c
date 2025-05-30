// Avoid Comments
// Prefer to avoid comments rather than to write them
// If a comment is truly necessary, explain the "why" not the "what".

#include <stdio.h>
#include <math.h>

// Before
double calculate_area_before(double radius) {
    // Calculate the area of a circle
    double area = M_PI * radius * radius;

    // Round the area to two decimal places
    area = round(area * 100.0) / 100.0;

    return area;
}

// After
double circle_area(double radius) {
    return M_PI * radius * radius;
}

double calculate_area(double radius) {
    double area = circle_area(radius);
    return round(area * 100.0) / 100.0;
}

int main() {
    printf("%.2f\n", calculate_area_before(5)); // Outputs: 78.54
    printf("\n");
    printf("%.2f\n", calculate_area(5)); // Outputs: 78.54

    return 0;
}
