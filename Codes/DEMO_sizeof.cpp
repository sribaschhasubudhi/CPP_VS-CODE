// learning to use sizeof operator

#include <iostream>
#include <climits> // Integer limits
#include <cfloat>  // Floating-point limits

int main() {
    // 1. Memory Size via sizeof
    std::cout << "int size:    " << sizeof(int) << " bytes\n";
    std::cout << "double size: " << sizeof(double) << " bytes\n\n";

    // 2. Integer Range via <climits>
    std::cout << "int Min:     " << INT_MIN << '\n';
    std::cout << "int Max:     " << INT_MAX << '\n';
    std::cout << "uint Max:    " << UINT_MAX << "\n\n";

    // 3. Floating-Point Properties via <cfloat>
    std::cout << "double Min (positive): " << DBL_MIN << '\n';
    std::cout << "double Max:            " << DBL_MAX << '\n';
    std::cout << "double Precision:      " << DBL_DIG << " digits\n";

    return 0;
}