// Avoid Flag Arguments
// Avoid providing boolean arguments (true/false) to functions or methods.
// You could pass a string with a clearer name (for example).

#include <iostream>
#include <string>

// Before
void greetBefore(const std::string& name, bool formal) {
    if (formal) {
        std::cout << "Good evening, " << name << "." << std::endl;
    } else {
        std::cout << "Hi, " << name << "!" << std::endl;
    }
}

// After
void greet(const std::string& name, const std::string& formality) {
    if (formality == "formal") {
        std::cout << "Good evening, " << name << "." << std::endl;
    } else if (formality == "informal") {
        std::cout << "Hi, " << name << "!" << std::endl;
    }
}

int main() {
    greetBefore("Alice", true);
    greetBefore("Bob", false);

    std::cout << std::endl;

    greet("Alice", "formal");
    greet("Bob", "informal");

    return 0;
}
