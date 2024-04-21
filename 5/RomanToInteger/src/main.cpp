#include <iostream>
#include "solution.h"

int main() {
    Solution solution;
    
    std::string s = "III";
    std::cout << "Input: " << s << std::endl;
    std::cout << "Output: " << solution.romanToInt(s) << std::endl;
    
    s = "LVIII";
    std::cout << "Input: " << s << std::endl;
    std::cout << "Output: " << solution.romanToInt(s) << std::endl;
    
    s = "MCMXCIV";
    std::cout << "Input: " << s << std::endl;
    std::cout << "Output: " << solution.romanToInt(s) << std::endl;
    
    return 0;
}