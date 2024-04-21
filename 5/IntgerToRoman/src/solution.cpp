#include "solution.h"

std::string Solution::intToRoman(int num) {
    std::vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::vector<std::string> numerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    std::string romanNumeral = "";
    
    for (int i = 0; i < values.size(); i++) {
        while (num >= values[i]) {
            num -= values[i];
            romanNumeral += numerals[i];
        }
    }
    
    return romanNumeral;
}