#include <iostream>
#include "solution.h"

int main() {
    Solution solution;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = solution.threeSum(nums);

    for (const auto &triplet : result) {
        for (int num : triplet) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}