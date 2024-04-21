#include "solution.h"

std::string Solution::convert(std::string s, int numRows) {
    if (numRows == 1 || s.length() <= numRows) {
        return s;
    }
    
    std::vector<std::string> rows(std::min(numRows, static_cast<int>(s.length())));
    int currentRow = 0;
    bool goingDown = false;
    
    for (char c : s) {
        rows[currentRow] += c;
        if (currentRow == 0 || currentRow == numRows - 1) {
            goingDown = !goingDown;
        }
        currentRow += goingDown ? 1 : -1;
    }
    
    std::string result;
    for (std::string row : rows) {
        result += row;
    }
    
    return result;
}
