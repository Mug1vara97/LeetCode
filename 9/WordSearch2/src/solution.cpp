#include "solution.h"

vector<string> Solution::findWords(vector<vector<char>>& board, vector<string>& words) {
    vector<string> result;
    for (string word : words) {
        if (exist(board, word)) {
            result.push_back(word);
        }
    }
    return result;
}

bool Solution::exist(vector<vector<char>>& board, string word) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
            if (dfs(board, word, i, j, 0)) {
                return true;
            }
        }
    }
    return false;
}

bool Solution::dfs(vector<vector<char>>& board, string word, int i, int j, int k) {
    if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[k]) {
        return false;
    }
    if (k == word.length() - 1) {
        return true;
    }
    char temp = board[i][j];
    board[i][j] = '*';
    bool found = dfs(board, word, i+1, j, k+1) || dfs(board, word, i-1, j, k+1) || dfs(board, word, i, j+1, k+1) || dfs(board, word, i, j-1, k+1);
    board[i][j] = temp;
    return found;
}