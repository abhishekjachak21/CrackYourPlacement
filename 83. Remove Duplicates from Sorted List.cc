class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode* dummy = new ListNode(102);
        dummy->next = head;

        ListNode* curr=dummy;
        while(curr->next !=NULL){
            if(curr->next->val==curr->val) {
              ListNode* del = curr->next;
              curr->next=curr->next->next;
              delete(del);}
            else curr=curr->next  ;
        }

        ListNode* newHead = dummy->next;
        delete(dummy);
        return newHead;
    }
};