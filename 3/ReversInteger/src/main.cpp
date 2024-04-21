#include <iostream>
#include "solution.h"

int main() {
    Solution solution;
    
    int x1 = 123;
    std::cout << "Input: " << x1 << std::endl;
    std::cout << "Output: " << solution.reverse(x1) << std::endl;
    
    int x2 = -123;
    std::cout << "Input: " << x2 << std::endl;
    std::cout << "Output: " << solution.reverse(x2) << std::endl;
    
    int x3 = 120;
    std::cout << "Input: " << x3 << std::endl;
    std::cout << "Output: " << solution.reverse(x3) << std::endl;
    
    return 0;
}

