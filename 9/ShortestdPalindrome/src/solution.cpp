#include "solution.h"

std::string Solution::shortestPalindrome(std::string s) {
    std::string rev = s;
    std::reverse(rev.begin(), rev.end());

    std::string new_s = s + "#" + rev;
    std::vector<int> lps(new_s.size(), 0);

    for (int i = 1; i < new_s.size(); i++) {
        int j = lps[i - 1];
        while (j > 0 && new_s[i] != new_s[j]) {
            j = lps[j - 1];
        }
        if (new_s[i] == new_s[j]) {
            j++;
        }
        lps[i] = j;
    }

    return rev.substr(0, s.size() - lps.back()) + s;
}