#include <iostream>
#include "solution.h"

int main() {
    Solution solution;
    std::string s = "(1+(4+5+2)-3)+(6+8)";
    int result = solution.calculate(s);
    std::cout << "Result: " << result << std::endl;

    return 0;
}