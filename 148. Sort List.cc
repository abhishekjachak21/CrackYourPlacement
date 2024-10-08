
class Solution {
    private:
    ListNode* getmid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast != NULL && fast-> next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    ListNode* mergelist(ListNode* left,ListNode* right){
        if(left == NULL){
            return right;
        }
        if(right == NULL){
            return left;
        }
        ListNode* ans = new ListNode();
        ListNode* temp = ans;

        while( left != NULL && right != NULL){
            if(left->val <= right->val){
                temp->next = left;
                temp = temp->next;
                left = left->next;
            }
            else{
                temp->next = right;
                temp = temp->next;
                right = right->next;
            }
        }
        if(left){
            temp -> next = left;
        }
        if(right){
            temp -> next = right;
        }
        ans = ans -> next;
        return ans;
    }

public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* Middle = getmid(head);

        ListNode* left = head;
        ListNode* right = Middle->next;
        Middle->next = NULL;

        left = sortList(left);
        right = sortList(right);

        ListNode* result = mergelist(left,right);
        return result;
    }
};