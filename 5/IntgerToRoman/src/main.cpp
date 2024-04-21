#include <iostream>
#include "solution.h"

int main() {
    Solution sol;
    int num1 = 3;
    std::cout << "Integer: " << num1 << ", Roman Numeral: " << sol.intToRoman(num1) << std::endl;

    int num2 = 58;
    std::cout << "Integer: " << num2 << ", Roman Numeral: " << sol.intToRoman(num2) << std::endl;

    int num3 = 1994;
    std::cout << "Integer: " << num3 << ", Roman Numeral: " << sol.intToRoman(num3) << std::endl;

    return 0;
}