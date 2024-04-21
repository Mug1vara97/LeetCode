#include "solution.h"

int Solution::maxArea(std::vector<int>& height) {
    int maxWater = 0;
    int left = 0, right = height.size() - 1;
    
    while (left < right) {
        int h = std::min(height[left], height[right]);
        maxWater = std::max(maxWater, h * (right - left));
        
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    
    return maxWater;
}