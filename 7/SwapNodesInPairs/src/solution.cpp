#include "solution.h"

ListNode* Solution::swapPairs(ListNode* head) {
    ListNode* dummy = new ListNode(-1);
    dummy->next = head;
    ListNode* prev = dummy;

    while (prev->next && prev->next->next) {
        ListNode* first = prev->next;
        ListNode* second = prev->next->next;

        prev->next = second;
        first->next = second->next;
        second->next = first;

        prev = first;
    }

    return dummy->next;
}