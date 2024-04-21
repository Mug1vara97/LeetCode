#include <iostream>
#include "solution.h"

int main() {
    Solution solution;
    
    std::string s = "PAYPALISHIRING";
    int numRows = 3;
    
    std::cout << "Input: s = " << s << ", numRows = " << numRows << std::endl;
    std::cout << "Output: " << solution.convert(s, numRows) << std::endl;
    
    return 0;
}