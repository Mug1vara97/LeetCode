#include <iostream>
#include "solution.h"

int main() {
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);
    head1->next->next->next = new ListNode(4);
    head1->next->next->next->next = new ListNode(5);

    Solution solution;
    int n1 = 2;
    ListNode* result1 = solution.removeNthFromEnd(head1, n1);

    while (result1 != nullptr) {
        std::cout << result1->val << " ";
        result1 = result1->next;
    }
    std::cout << std::endl;

    ListNode* head2 = new ListNode(1);
    int n2 = 1;
    ListNode* result2 = solution.removeNthFromEnd(head2, n2);

    if (result2 == nullptr) {
        std::cout << "List is empty" << std::endl;
    }

    ListNode* head3 = new ListNode(1);
    head3->next = new ListNode(2);
    int n3 = 1;
    ListNode* result3 = solution.removeNthFromEnd(head3, n3);

    while (result3 != nullptr) {
        std::cout << result3->val << " ";
        result3 = result3->next;
    }
    std::cout << std::endl;

    return 0;
}