#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words);
    
private:
    bool exist(vector<vector<char>>& board, string word);
    bool dfs(vector<vector<char>>& board, string word, int i, int j, int k);
};

#endif