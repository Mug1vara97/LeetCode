#include "solution.h"
#include <iostream>

int main() {
    Solution solution;
    
    std::cout << solution.isValid("()") << std::endl;
    std::cout << solution.isValid("()[]{}") << std::endl;
    std::cout << solution.isValid("(]") << std::endl;
    
    return 0;
}