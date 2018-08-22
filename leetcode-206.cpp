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
    ListNode* reverseList(ListNode* head) {
        ListNode* p=head;
        while(head&&head->next!=NULL)
        {
            ListNode* tmp=head->next;
            head->next=head->next->next;
            tmp->next=p;
            p=tmp;

        }

        return p;
    }
};
