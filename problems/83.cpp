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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) {
            return head;
        }
        ListNode* left = head;
        ListNode* right = left->next;
        while (right != nullptr) {
            if (left->val == right->val) {
                left->next = right->next;
                right = left->next;
            } else {
                left = left->next;
                right = right->next;
            }
        }
        return head;
    }
};
