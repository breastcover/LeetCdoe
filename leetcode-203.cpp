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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* tmp=head;
        if(head==NULL)
            return NULL;

        while(tmp!=NULL&&tmp->next!=NULL)
        {
            if(tmp->next->val==val)
            {
                ListNode* ptr=tmp->next;
                tmp->next=tmp->next->next;
                delete(ptr);
            }
            else
                tmp=tmp->next;
        }
        if(head->val==val)
        {
            ListNode* ptr=head;
            head=head->next;
            delete(ptr);
        }

        return head;
    }
};
