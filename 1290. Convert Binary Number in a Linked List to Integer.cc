/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int siz = 0;
        while(temp != NULL){
            siz++;
            temp = temp->next;
        }
        
        temp = head;
        int ans = 0;
        while(temp != NULL){
            ans += (temp->val) * pow(2,siz-1);
            siz--;
            temp=temp->next;
        }
        return ans;
    }
};