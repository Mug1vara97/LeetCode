#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n);
    
    void backtrack(vector<string>& result, string current, int open, int close, int max);
};

#endif