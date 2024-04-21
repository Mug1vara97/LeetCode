#include <iostream>
#include "solution.h"

int main() {
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    Solution solution;
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);

    while (mergedList) {
        std::cout << mergedList->val << " ";
        mergedList = mergedList->next;
    }

    return 0;
}