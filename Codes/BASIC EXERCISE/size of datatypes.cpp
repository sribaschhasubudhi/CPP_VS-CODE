/*
We will calculate the size of fundamental datatypes of C++ using sizeof().
*/

#include <iostream>
#include <cfloat>

int main()
{
    std::cout << "The size of char is " << sizeof(char) << " byte\n";
    std::cout << "The size of int is " << sizeof(int) << " bytes\n";
    std::cout << "The size of signed long int is " << sizeof(signed long int) << " bytes\n";
    std::cout << "The size of unsigned long int is " << sizeof(unsigned long int) << " bytes\n";
    std::cout << "The size of long is " << sizeof(long) << " bytes\n";
    std::cout << "The size of unsigned short int is " << sizeof(unsigned short int) << " bytes\n";
    std::cout << "The size of short int is " << sizeof(short int) << " bytes\n";
    std::cout << "The size of long long is " << sizeof(long long) << " bytes\n";

    std::cout << "\nThe size of float is " << sizeof(float) << " bytes\n";
    std::cout << "The size of double is " << sizeof(double) << " bytes\n";
    std::cout << "The size of long double is " << sizeof(long double) << " bytes\n";
    return 0;
}