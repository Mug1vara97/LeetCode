#include "solution.h"

int Solution::rob(std::vector<int>& nums) {
    int n = nums.size();
    if (n == 1) {
        return nums[0];
    }
    return std::max(robHouse(nums, 0, n - 2), robHouse(nums, 1, n - 1));
}

int Solution::robHouse(std::vector<int>& nums, int start, int end) {
    int n = end - start + 1;
    if (n == 1) {
        return nums[start];
    }
    std::vector<int> dp(n);
    dp[0] = nums[start];
    dp[1] = std::max(nums[start], nums[start + 1]);
    for (int i = 2; i < n; i++) {
        dp[i] = std::max(dp[i - 1], dp[i - 2] + nums[start + i]);
    }
    return dp[n - 1];
}