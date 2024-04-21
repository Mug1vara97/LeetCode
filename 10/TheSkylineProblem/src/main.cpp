#include <iostream>
#include "solution.h"

int main() {
    Solution solution;

    std::vector<std::vector<int>> buildings = {{2, 9, 10}, {3, 7, 15}, {5, 12, 12}, {15, 20, 10}, {19, 24, 8}};

    std::vector<std::vector<int>> skyline = solution.getSkyline(buildings);

    for (const auto& point : skyline) {
        std::cout << "[" << point[0] << ", " << point[1] << "] ";
    }

    return 0;
}