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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail = &dummy; // Pointer to the last node in the merged list

        while (list1 && list2) {
            if (list1->val < list2->val) {
                tail->next = list1; // Link to list1 node
                list1 = list1->next; // Move to the next node in list1
            } else {
                tail->next = list2; // Link to list2 node
                list2 = list2->next; // Move to the next node in list2
            }
            tail = tail->next; // Move the tail pointer
        }

        // If there are remaining nodes in either list, link them
        if (list1) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }

        return dummy.next; // Return the merged list
    }
};
