#include <iostream>
#include <string>

int main() {
    std::string name;               // declaring name variable is a string
    int favorite_number;            // declaring favourite_number is an integer

    std::cout << "Hello from C++ on macOS!" << std::endl;
    std::cout << "Enter your first name: ";       
    std::cin >> name;                             // input name variable

    std::cout << "Enter your favorite integer: "; 
    std::cin >> favorite_number;                  // input favourite_number variable

    std::cout << "Awesome, " << name << "! " 
              << favorite_number << " is a great number." << std::endl;

    return 0;
}
