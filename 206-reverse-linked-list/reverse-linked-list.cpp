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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr; // Previous node
        ListNode* curr = head;    // Current node

        while (curr) {
            ListNode* nextTemp = curr->next; // Save the next node
            curr->next = prev;              // Reverse the current node's pointer
            prev = curr;                    // Move prev to the current node
            curr = nextTemp;                // Move to the next node
        }

        return prev; // New head of the reversed list
    }
};
