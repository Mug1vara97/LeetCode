#include <iostream>
#include "solution.h"

int main() {
    Solution solution;

    int a = 2, b = 6, c = 5;
    std::cout << "Минимальное количество переворотов, необходимых для a = 2, b = 6, c = 5: " << solution.minFlips(a, b, c) << std::endl;

    a = 4;
    b = 2;
    c = 7;
    std::cout << "Минимальное количество переворотов, необходимых для a = 4, b = 2, c = 7: " << solution.minFlips(a, b, c) << std::endl;

    a = 1;
    b = 2;
    c = 3;
    std::cout << "Минимальное количество переворотов, необходимых для a = 1, b = 2, c = 3: " << solution.minFlips(a, b, c) << std::endl;

    return 0;
}
