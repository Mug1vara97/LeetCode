#include <iostream>
#include "solution.h"

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution solution;
    int k = 2;
    ListNode* reversedHead = solution.reverseKGroup(head, k);

    ListNode* current = reversedHead;
    while (current != nullptr) {
        std::cout << current->val << " ";
        current = current->next;
    }
    return 0;
}