#include <iostream>
#include <climits>

int main()
{
    unsigned int max_unsigned_int_number{UINT_MAX};
    max_unsigned_int_number = max_unsigned_int_number + 1;
    std::cout << "The new biggest unsigned integer is " << max_unsigned_int_number << std::endl;
    return 0;
}