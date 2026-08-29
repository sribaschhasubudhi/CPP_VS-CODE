/*In this c++ code, we will ask the user to enter his date,
  month and year of birth. we print his DOB*/

#include <iostream>
#include <string>

int main()
{
    int day;
    int month;
    int year;
    std::cout << "Enter date of your birthday:- ";
    std::cin >> day;
    std::cout << "Enter month of your birthday:- ";
    std::cin >> month;
    std::cout << "Enter year of your birthday:- ";
    std::cin >> year;
    std::cout << "Nice! you birthday is on " 
         <<day<< "/" << month << "/" << year << std::endl;
    return 0;        
}