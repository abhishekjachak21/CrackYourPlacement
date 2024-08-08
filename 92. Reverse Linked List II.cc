class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) {
            return head;
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        for (int i = 0; i < left - 1; i++) {
            prev = prev->next;
        }

        ListNode* cur = prev->next;

        for (int i = 0; i < right - left; i++) {
            // Take the node to be moved
            ListNode* temp = cur->next;
            // Move the node to the front of the segment
            cur->next = temp->next;
            temp->next = prev->next;
            prev->next = temp;
        }

        ListNode* newHead = dummy->next;
        delete dummy; 
        return newHead;    
    }
};