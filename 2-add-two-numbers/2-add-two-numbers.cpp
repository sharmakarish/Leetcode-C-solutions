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
        
        #define NEXT(list, i) \
            if (list) { \
                i = list->val; \
                list = list->next; \
            } \
            else i = 0;
        
        int carry = 0, first, second;
        ListNode *head = new ListNode(0), *tail = head;
        while (l1 || l2 || carry) {
            
            NEXT(l1, first);
            NEXT(l2, second);
            
            int temp = first+second+carry;
            tail->next = new ListNode(temp%10);
            tail = tail->next;
            carry = temp/10;
            
        }
        return head->next;
    }
};