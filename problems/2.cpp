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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        int carryIn = 0;
        while (l1 != nullptr || l2 != nullptr || carryIn == 1) {
            int x1 = 0;
            int x2 = 0;
            if (l1 != nullptr) {
                x1 = l1->val;
            }
            if (l2 != nullptr) {
                x2 = l2->val;
            }
            int sum = x1 + x2 + carryIn;
            carryIn = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
            if (l1 != nullptr) {
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                l2 = l2->next;
            }
        }
        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }
};
