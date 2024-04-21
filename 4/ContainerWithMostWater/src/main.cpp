#include <iostream>
#include <vector>
#include "solution.h"

int main() {
    Solution solution;
    std::vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int maxWater = solution.maxArea(height);
    std::cout << "Maximum amount of water that the container can store: " << maxWater << std::endl;

    return 0;
}