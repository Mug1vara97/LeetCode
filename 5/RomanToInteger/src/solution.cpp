#include "solution.h"

int Solution::romanToInt(std::string s) {
    std::unordered_map<char, int> roman_map = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    
    int result = 0;
    int prev_value = 0;
    
    for(int i = s.length()-1; i >= 0; i--) {
        int curr_value = roman_map[s[i]];
        
        if(curr_value < prev_value) {
            result -= curr_value;
        } else {
            result += curr_value;
        }
        
        prev_value = curr_value;
    }
    
    return result;
}