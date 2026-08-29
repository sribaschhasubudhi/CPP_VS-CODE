/*
Calculating the sum of 2 numbers provided by the user.
*/

#include <iostream>

int main()
{
    std::cout << "Give me the first number:- ";
    double first_number{0};
    std::cin >> first_number;
    std::cout << "Give me the second number:- ";
    double second_number{0};
    std::cin >> second_number;
    std::cout << "\nThe sum of " << first_number << " and " << second_number << " is "
    << first_number + second_number << std::endl;
    return 0;
}