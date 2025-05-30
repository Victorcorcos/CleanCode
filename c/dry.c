// DRY (Don't Repeat Yourself)
// If a piece of code is identical or very similar to another, try to extract it into a generalized function

#include <stdio.h>

// Before
void greet_morning() {
    printf("Good morning, Alice!\n");
}

void greet_afternoon() {
    printf("Good afternoon, Alice!\n");
}

void greet_evening() {
    printf("Good evening, Alice!\n");
}

// After
void greet(const char* day_period, const char* name) {
    printf("Good %s, %s!\n", day_period, name);
}

int main() {
    // Before usage
    greet_morning();
    greet_afternoon();
    greet_evening();

    printf("\n");

    // After usage
    greet("morning", "Alice");
    greet("afternoon", "Alice");
    greet("evening", "Alice");

    return 0;
}
