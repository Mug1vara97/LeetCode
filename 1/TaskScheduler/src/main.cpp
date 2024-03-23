#include <iostream>
#include <vector>
#include "solution.h"

int main() {
    std::vector<char> tasks1 = {'A', 'A', 'A', 'B', 'B', 'B'};
    int n1 = 2;
    Solution sol1;
    int result1 = sol1.leastInterval(tasks1, n1);
    std::cout << "Output for tasks1: " << result1 << std::endl;

    std::vector<char> tasks2 = {'A', 'C', 'A', 'B', 'D', 'B'};
    int n2 = 1;
    Solution sol2;
    int result2 = sol2.leastInterval(tasks2, n2);
    std::cout << "Output for tasks2: " << result2 << std::endl;

    std::vector<char> tasks3 = {'A', 'A', 'A', 'B', 'B', 'B'};
    int n3 = 3;
    Solution sol3;
    int result3 = sol3.leastInterval(tasks3, n2);
    std::cout << "Output for tasks3: " << result3 << std::endl;

    return 0;
}