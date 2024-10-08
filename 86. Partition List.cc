class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy1 = new ListNode(-1);
        ListNode* dummy2 = new ListNode(-1);
        ListNode* less = dummy1;
        ListNode* greater = dummy2;

        ListNode* curr = head;
        while (curr) {
            if (curr->val < x) {
                less->next = curr;
                less = less->next;
            } else {
                greater->next = curr;
                greater = greater->next;
            }
            curr = curr->next;
        }
        
        greater->next = nullptr;
        less->next = dummy2->next;
        
        ListNode* newHead = dummy1->next;
        
        delete dummy1;
        delete dummy2;
        
        return newHead;
    }
};