#include "solution.h"
#include <limits.h>

int Solution::reverse(int x) {
    long result = 0;
    
    while (x != 0) {
        result = result * 10 + x % 10;
        x /= 10;
    }
    
    if (result < INT_MIN || result > INT_MAX) {
        return 0;
    }
    
    return result;
}