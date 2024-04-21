#include "solution.h"
#include <unordered_set>

bool Solution::containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> seen;
    
    for(int num : nums) {
        if(seen.count(num) > 0) {
            return true;
        }
        seen.insert(num);
    }
    
    return false;
}