#include "solution.h"

ListNode* Solution::reverseKGroup(ListNode* head, int k) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    
    ListNode* pre = dummy;
    ListNode* end = dummy;
    
    while (end->next != nullptr) {
        for (int i = 0; i < k && end != nullptr; i++) {
            end = end->next;
        }
        if (end == nullptr) {
            break;
        }
        ListNode* start = pre->next;
        ListNode* next = end->next;
        end->next = nullptr;
        pre->next = reverseList(start);
        start->next = next;
        
        pre = start;
        end = pre;
    }
    
    return dummy->next;
}

ListNode* Solution::reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head;
    
    while (current != nullptr) {
        ListNode* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    return prev;
}