#include <iostream>
#include "solution.h"

int main() {
    Solution sol;
    
    int x = 121;
    std::cout << "Input: x = " << x << std::endl;
    std::cout << "Output: " << std::boolalpha << sol.isPalindrome(x) << std::endl;
    
    x = -121;
    std::cout << "Input: x = " << x << std::endl;
    std::cout << "Output: " << std::boolalpha << sol.isPalindrome(x) << std::endl;
    
    x = 10;
    std::cout << "Input: x = " << x << std::endl;
    std::cout << "Output: " << std::boolalpha << sol.isPalindrome(x) << std::endl;
    
    return 0;
}