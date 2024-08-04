class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Base cases:
        if (list1 == nullptr) return list2; // If list1 is empty, return list2
        if (list2 == nullptr) return list1; // If list2 is empty, return list1

        // Recursive case:
        if (list1->val < list2->val) {
            // list1's current node is smaller
            // Recur for the next nodes of list1 and list2
            list1->next = mergeTwoLists(list1->next, list2);
            return list1; // Return the head of the merged list
        } else {
            // list2's current node is smaller
            // Recur for the next nodes of list1 and list2
            list2->next = mergeTwoLists(list1, list2->next);
            return list2; // Return the head of the merged list
        }
    }
};