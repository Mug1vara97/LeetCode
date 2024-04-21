#include "solution.h"
#include <iostream>

int main() {
    Solution solution;
    
    int n1 = 3;
    vector<string> result1 = solution.generateParenthesis(n1);
    cout << "Output for n = 3:" << endl;
    for (string s : result1) {
        cout << s << " ";
    }
    cout << endl;
    
    int n2 = 1;
    vector<string> result2 = solution.generateParenthesis(n2);
    cout << "Output for n = 1:" << endl;
    for (string s : result2) {
        cout << s << " ";
    }
    cout << endl;
    
    return 0;
}