// Boy Scout Rule
// Always leave the campsite cleaner than you found it.
// Take the time to apply Clean Code principles to small parts of the code as you program.
// Over time, you will find the codebase much cleaner than when you found it!

#include <iostream>
#include <string>
#include <map>

// Before
void printUserInfoBefore(const std::map<std::string, std::string>& user) {
    std::cout << "Name: " + user.at("name") << std::endl;
    std::cout << "Email: " + user.at("email") << std::endl;
    if (user.find("age") != user.end() && !user.at("age").empty()) {
        std::cout << "Age: " + user.at("age") << std::endl;
    }
}

// After
void printUserInfo(const std::map<std::string, std::string>& user) {
    std::cout << "Name: " << user.at("name") << std::endl;
    std::cout << "Email: " << user.at("email") << std::endl;
    if (user.find("age") != user.end() && !user.at("age").empty()) {
        std::cout << "Age: " << user.at("age") << std::endl;
    }
}

int main() {
    std::map<std::string, std::string> user = {
        {"name", "Alice"},
        {"email", "alice@example.com"},
        {"age", "30"}
    };

    printUserInfoBefore(user);
    std::cout << std::endl;
    printUserInfo(user);

    return 0;
}
