#include <iostream>
#include <vector>
#include "solution.h"

int main() {
    std::vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    Solution solution;
    std::vector<int> duplicates = solution.findDuplicates(nums);

    std::cout << "Duplicates: ";
    for (int num : duplicates) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}