#include <iostream>
#include "solution.h"

int main() {
    Solution sol;
    
    int n1 = 10;
    std::cout << sol.countPrimes(n1) << std::endl; // Output: 4
    
    int n2 = 0;
    std::cout << sol.countPrimes(n2) << std::endl; // Output: 0
    
    int n3 = 1;
    std::cout << sol.countPrimes(n3) << std::endl; // Output: 0
    
    return 0;
}