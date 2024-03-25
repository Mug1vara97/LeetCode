#include "solution.h"
#include <cmath>

std::vector<int> Solution::findDuplicates(std::vector<int>& nums) {
    std::vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        int index = std::abs(nums[i]) - 1;
        if (nums[index] < 0) {
            result.push_back(index + 1);
        } else {
            nums[index] *= -1;
        }
    }
    return result;
}