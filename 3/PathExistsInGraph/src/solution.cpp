#include "solution.h"

bool Solution::validPath(int n, std::vector<std::vector<int>>& edges, int source, int destination) {
    std::vector<std::vector<int>> adjList(n);
    for (auto edge : edges) {
        adjList[edge[0]].push_back(edge[1]);
        adjList[edge[1]].push_back(edge[0]);
    }
    
    std::vector<bool> visited(n, false);
    std::queue<int> q;
    q.push(source);
    visited[source] = true;
    
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        if (current == destination) {
            return true;
        }
        for (int neighbor : adjList[current]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
    
    return false;
} 