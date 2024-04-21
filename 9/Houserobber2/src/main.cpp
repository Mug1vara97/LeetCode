#include "solution.h"
#include <iostream>
#include <vector>

int main() {
    Solution solution;
    std::vector<int> nums1 = {2, 3, 2};
    std::cout << solution.rob(nums1) << std::endl;

    std::vector<int> nums2 = {1, 2, 3, 1};
    std::cout << solution.rob(nums2) << std::endl;

    std::vector<int> nums3 = {1, 2, 3};
    std::cout << solution.rob(nums3) << std::endl;

    return 0;
}