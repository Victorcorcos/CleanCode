// DRY (Don't Repeat Yourself)
// If a piece of code is identical or very similar to another, try to extract it into a generalized function

#include <iostream>
#include <string>

// Before
void greetMorning() {
    std::cout << "Good morning, Alice!" << std::endl;
}

void greetAfternoon() {
    std::cout << "Good afternoon, Alice!" << std::endl;
}

void greetEvening() {
    std::cout << "Good evening, Alice!" << std::endl;
}

// After
void greet(const std::string& dayPeriod, const std::string& name) {
    std::cout << "Good " << dayPeriod << ", " << name << "!" << std::endl;
}

int main() {
    // Before usage
    greetMorning();
    greetAfternoon();
    greetEvening();

    std::cout << std::endl;

    // After usage
    greet("morning", "Alice");
    greet("afternoon", "Alice");
    greet("evening", "Alice");

    return 0;
}
