class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) { //it was bit tricky that we have to delte both
         ListNode* dummy = new ListNode(102);
        dummy->next = head;
        ListNode* curr=dummy;
        while(curr->next && curr->next->next){
            if(curr->next->next->val==curr->next->val) {
              int dupVal = curr->next->val;    //imp step
              while(curr->next && curr->next->val == dupVal){
                 ListNode* della = curr->next;
                 curr->next = curr->next->next;
                 delete(della);
              }
            }
            else curr=curr->next  ;
        }

        ListNode* newHead = dummy->next;
        delete(dummy);
        return newHead;
    }
};