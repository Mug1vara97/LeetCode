#include <iostream>
#include <vector>
#include "solution.h"

int main() {
    int n = 3;
    std::vector<std::vector<int>> edges = {{0,1},{1,2},{2,0}};
    int source = 0;
    int destination = 2;

    Solution solution;
    bool result = solution.validPath(n, edges, source, destination);

    std::cout << std::boolalpha << result << std::endl;

    return 0;
}

