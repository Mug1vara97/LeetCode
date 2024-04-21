#include "solution.h"
#include <stack>

int Solution::calculate(std::string s) {
    std::stack<int> nums, ops;
    int num = 0;
    int result = 0;
    int sign = 1;
    
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (isdigit(c)) {
            num = num * 10 + (c - '0');
        } else if (c == '+' || c == '-') {
            result += sign * num;
            num = 0;
            sign = (c == '+') ? 1 : -1;
        } else if (c == '(') {
            nums.push(result);
            ops.push(sign);
            result = 0;
            sign = 1;
        } else if (c == ')') {
            result += sign * num;
            num = 0;
            result *= ops.top();
            ops.pop();
            result += nums.top();
            nums.pop();
        }
    }
    
    result += sign * num;
    
    return result;
}