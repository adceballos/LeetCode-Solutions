// Middle of the Linked List
// no timer, used solution
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
    ListNode* middleNode(ListNode* head) {
        ListNode* end = head;
        ListNode* middle = head;
        // middle iterates by 1 and end iterates by 2, that is why we have these conditionals in our while loop: it ensures that end has a value when executing end = end->next->next.
        while (end && end->next) {
            middle = middle->next;
            end = end->next->next;
        }
        return middle;
    }
};
