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

 //Author : Osama
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
        ListNode* dummy = new ListNode(0);  
        ListNode* current = dummy;

        int c = 0;  // carry

        while (l1 != nullptr || l2 != nullptr || c != 0) {
            int sum = c;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }    

            c = sum / 10;
            int d = sum % 10;

            current->next = new ListNode(d);
            current = current->next;
        }

        return dummy->next;  
    }
};
