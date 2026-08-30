#include <iostream>
#include <climits>

int main()
{
    int max_integer_number{INT_MAX};
    max_integer_number = max_integer_number + 1;
    std::cout << "New max number: " << max_integer_number << std::endl;
    return 0;
}