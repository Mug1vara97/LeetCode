#include "solution.h"
#include <vector>
#include <algorithm>
#include <set>

std::vector<std::vector<int>> Solution::getSkyline(std::vector<std::vector<int>>& buildings) {
    std::vector<std::vector<int>> result;
    std::vector<std::pair<int, int>> points;

    for (auto& building : buildings) {
        points.push_back({building[0], -building[2]});
        points.push_back({building[1], building[2]});
    }

    std::sort(points.begin(), points.end());

    std::multiset<int> heights = {0};
    int prevHeight = 0;

    for (auto& point : points) {
        if (point.second < 0) {
            heights.insert(-point.second);
        } else {
            heights.erase(heights.find(point.second));
        }

        int currentHeight = *heights.rbegin();

        if (currentHeight != prevHeight) {
            result.push_back({point.first, currentHeight});
            prevHeight = currentHeight;
        }
    }

    return result;
}