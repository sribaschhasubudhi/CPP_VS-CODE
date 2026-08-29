/*
The purpose of this program is to check the limits of the datatypes
*/

#include <iostream>
#include <climits>
#include <cfloat>

int main()
{
    std::cout << "The maximum limit of int data type: " << INT_MAX << "\n";
    std::cout << "The minimum limit of int data type: " << INT_MAX << "\n";
    std::cout << "The maximum limit of unsigned int data type: " << UINT_MAX << "\n";
    std::cout << "The maximum limit of long long int data type: " << LLONG_MAX << "\n";
    std::cout << "The maximum limit of  unsigned long long int data type: " << ULLONG_MAX << "\n";
    std::cout << "\nNumber of bits in char data type: " << CHAR_BIT << "\n";
    std::cout << "The maximum limit of char data type: " << CHAR_MAX << "\n";
    std::cout << "The minimum limit of char data type: " << CHAR_MIN << "\n";
    std::cout << "\nThe maximum limit of short data type: " << SHRT_MAX << "\n";
    std::cout << "The minimum limit of short data type: " << SHRT_MIN << "\n\n";

    std::cout << "The maximum limit of float datatype: " << FLT_MAX << "\n";
    std::cout << "The minimum limit of float datatype: " << FLT_MIN << "\n";
    std::cout << "The maximum limit of double datatype: " << DBL_MAX << "\n";
    std::cout << "The minimum limit of double datatype: " << DBL_MIN << "\n";
}