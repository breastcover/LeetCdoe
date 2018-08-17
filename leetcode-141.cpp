/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr) return false;
        ListNode* fast=head;
        while(head)
        {
            head=head->next;
            if(fast->next&&fast->next->next)
                fast=fast->next->next;
            else
                return false;
            if(fast==head)
                return true;
        }
        return false;
    }
};
