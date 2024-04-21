#include <iostream>
#include "solution.h"

int main() {
    Solution solution;
    std::string s = "aacecaaa";
    std::cout << solution.shortestPalindrome(s) << std::endl;

    s = "abcd";
    std::cout << solution.shortestPalindrome(s) << std::endl;

    return 0;
}