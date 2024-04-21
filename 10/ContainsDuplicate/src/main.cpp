#include <iostream>
#include "solution.h"

int main() {
    Solution solution;
    std::vector<int> nums1 = {1, 2, 3, 1};
    std::cout << solution.containsDuplicate(nums1) << std::endl;
    
    std::vector<int> nums2 = {1, 2, 3, 4};
    std::cout << solution.containsDuplicate(nums2) << std::endl;
    
    std::vector<int> nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    std::cout << solution.containsDuplicate(nums3) << std::endl;
    
    return 0;
}