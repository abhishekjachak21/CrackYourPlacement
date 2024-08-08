
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* curr=dummy;
        while(curr->next !=NULL){
            if(curr->next->val==val) {
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