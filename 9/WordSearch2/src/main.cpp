#include <iostream>
#include "solution.h"

int main() {
    vector<vector<char>> board = {{'o','a','a','n'}, {'e','t','a','e'}, {'i','h','k','r'}, {'i','f','l','v'}};
    vector<string> words = {"oath", "pea", "eat", "rain"};
    
    Solution solution;
    vector<string> result = solution.findWords(board, words);
    
    for (string word : result) {
        cout << word << " ";
    }
    
    return 0;
}