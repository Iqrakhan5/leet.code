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
    ListNode* removeNodes(ListNode* head) {
        // Step 1: Reverse the list
        ListNode* prev = nullptr;
        ListNode* current = head;
        while (current) {
            ListNode* nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        head = prev;

        // Step 2: Filter nodes based on the maximum value seen so far
        ListNode* dummy = new ListNode(0); // Dummy node for the filtered list
        ListNode* filteredTail = dummy;
        int maxVal = INT_MIN;

        while (head) {
            if (head->val >= maxVal) {
                maxVal = head->val;
                filteredTail->next = head;
                filteredTail = filteredTail->next;
            }
            head = head->next;
        }
        filteredTail->next = nullptr;

        // Step 3: Reverse the filtered list back to original order
        prev = nullptr;
        current = dummy->next;
        while (current) {
            ListNode* nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        return prev;
    }
};
