#include <iostream>
#include "solution.h"

int main() {
    Solution solution;
    
    std::vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    int result = solution.threeSumClosest(nums, target);

    std::cout << "Result: " << result << std::endl;

    return 0;
}