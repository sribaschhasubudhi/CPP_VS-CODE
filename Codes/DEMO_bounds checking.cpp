#include <iostream>

int main()
{
    int years[] {2019,2026,1992,1971,1947};
    std::cout << "India got independence in the year " << years[4] << std::endl;
    // std::cout << "My date of birth is " << years[10] << std::endl;
    // years[10]=2007;
    /* remove the above single-line comments and run the code to see the warnings for bounds checking */
    return 0;
}