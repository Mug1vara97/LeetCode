#include "solution.h"

vector<vector<int>> Solution::threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    if(nums.size() < 3) {
        return result;
    }
    
    sort(nums.begin(), nums.end());
    
    for(int i = 0; i < nums.size() - 2; i++) {
        if(i == 0 || (i > 0 && nums[i] != nums[i-1])) {
            int left = i + 1;
            int right = nums.size() - 1;
            int target = -nums[i];
            
            while(left < right) {
                if(nums[left] + nums[right] == target) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    while(left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    while(left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    left++;
                    right--;
                } else if(nums[left] + nums[right] < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }
    
    return result;
}
