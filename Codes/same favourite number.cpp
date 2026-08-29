#include <iostream>

int main()
{
    int favourite_number;
    std::cout << "Enter your Favourite Number between 1 to 100:-";
    std::cin >> favourite_number;
    if (favourite_number>1 and favourite_number<100)
    {
        std::cout << "Amazing! That's my favourite number too!" << std::endl;
        std::cout << "No really!!" << favourite_number << " is my favourite number" << std::endl;

    }
    else
    {
        std::cout << favourite_number << " doesn't lie between 1 to 100" << std::endl;
    }
    return 0;
}