
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       
        if (headA == nullptr || headB == nullptr) return nullptr;
        
        ListNode *pointerA = headA;
        ListNode *pointerB = headB;

        while (pointerA != pointerB) {
            pointerA = pointerA == nullptr ? headB : pointerA->next;
            pointerB = pointerB == nullptr ? headA : pointerB->next;
        }

        return pointerB; //or pointerA any fine
        
    } 
};
