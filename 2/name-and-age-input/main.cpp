#include <iostream>
#include <string>

int main() {
    std::string name;
    double age;
    std::cout << "Please enter your name and age\n";
    std::cin >> name >> age;
    std::cout << "Hello " << name << ", you are approximately " << age * 12
              << " months old!";
    return 0;
}
