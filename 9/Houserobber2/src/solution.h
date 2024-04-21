#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

class Solution {
public:
    int rob(std::vector<int>& nums);
    
    int robHouse(std::vector<int>& nums, int start, int end);
};

#endif