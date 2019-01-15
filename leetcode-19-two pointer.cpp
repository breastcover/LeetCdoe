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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode** t1=&head;
        ListNode* t2=head;
        for(int i=1;i<n;i++)
        {
            t2=t2->next;
        }
        while(t2->next!=nullptr)
        {
            t1=(&(*t1)->next);
            t2=t2->next;
        }
        ListNode* tmp=*t1;
        *t1=(*t1)->next;
        delete tmp;
        return head;
    }
};
