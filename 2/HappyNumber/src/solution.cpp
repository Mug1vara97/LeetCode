#include "solution.h"

bool Solution::isHappy(int n) {
    std::unordered_set<int> seenNumbers;

    while(n != 1 && seenNumbers.find(n) == seenNumbers.end()) {
        seenNumbers.insert(n);
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
    }
    return n == 1;
}