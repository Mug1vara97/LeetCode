#include <iostream>
#include "solution.h"

int main() {
    Solution solution;
    int n1 = 19;
    int n2 = 2;

    std::cout << "Is 19 a happy number? " << std::boolalpha << solution.isHappy(n1) << std::endl;
    std::cout << "Is 2 a happy number? " << std::boolalpha << solution.isHappy(n2) << std::endl;

    return 0;
}