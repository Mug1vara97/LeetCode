#include "solution.h"

int Solution::leastInterval(std::vector<char>& tasks, int n) {
    std::unordered_map<char, int> taskCount;
    std::priority_queue<int> pq;
    
    for (char task : tasks) {
        taskCount[task]++;
    }
    
    for (auto it : taskCount) {
        pq.push(it.second); 
    }
    
    int cycle = 0;
    while (!pq.empty()) {
        std::vector<int> temp;
        
        for (int i = 0; i < n + 1; i++) {
            if (!pq.empty()) {
                temp.push_back(pq.top() - 1);
                pq.pop();
            }
        }
        
        for (int t : temp) {
            if (t > 0) {
                pq.push(t);
            }
        }
        
        cycle += pq.empty() ? temp.size() : n + 1;
    }
    
    return cycle;
}