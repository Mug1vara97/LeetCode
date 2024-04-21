#include "solution.h"
#include <vector>
#include <algorithm>

int Solution::threeSumClosest(std::vector<int>& nums, int target) {
    int closestSum = nums[0] + nums[1] + nums[2];
    std::sort(nums.begin(), nums.end());
        
    for(int i = 0; i < nums.size() - 2; i++) {
        int left = i + 1;
        int right = nums.size() - 1;
        
        while(left < right) {
            int currentSum = nums[i] + nums[left] + nums[right];
            
            if(std::abs(currentSum - target) < std::abs(closestSum - target)) {
                closestSum = currentSum;
            }
            
            if(currentSum < target) {
                left++;
            } else {
                right--;
            }
        }
    }
    
    return closestSum;
}