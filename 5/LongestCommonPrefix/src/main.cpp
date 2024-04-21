#include <iostream>
#include <vector>
#include "solution.h"

int main() {
    std::vector<std::string> strs = {"flower","flow","flight"};
    Solution sol;
    std::cout << sol.longestCommonPrefix(strs) << std::endl;
    
    return 0;
}