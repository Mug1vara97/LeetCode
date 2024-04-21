#include <iostream>
#include "solution.h"

int main() {
    Solution solution;
    
    std::string s1 = "42";
    std::cout << "Input: " << s1 << std::endl;
    std::cout << "Output: " << solution.myAtoi(s1) << std::endl;
    
    std::string s2 = "   -42";
    std::cout << "Input: " << s2 << std::endl;
    std::cout << "Output: " << solution.myAtoi(s2) << std::endl;
    
    std::string s3 = "4193 with words";
    std::cout << "Input: " << s3 << std::endl;
    std::cout << "Output: " << solution.myAtoi(s3) << std::endl;
    
    return 0;
}