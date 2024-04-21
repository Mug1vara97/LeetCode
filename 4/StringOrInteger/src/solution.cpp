#include "solution.h"
#include <limits.h>

int Solution::myAtoi(std::string s) {
    int i = 0;
    int sign = 1;
    long result = 0;
    
    while (s[i] == ' ') {
        i++;
    }
    
    if (s[i] == '-' || s[i] == '+') {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }
    
    while (i < s.length() && isdigit(s[i])) {
        result = result * 10 + (s[i] - '0');
        
        if (result * sign >= INT_MAX) {
            return INT_MAX;
        } else if (result * sign <= INT_MIN) {
            return INT_MIN;
        }
        
        i++;
    }
    
    return result * sign;
}