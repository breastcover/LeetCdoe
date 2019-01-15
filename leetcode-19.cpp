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
        ListNode* tmp=head;
        int num=0;
        while(head->next!=NULL)
        {
            num++;
            head=head->next;
        }
        head=tmp;
        if(num+1==n)
        {
            ListNode* del=head;
            head=head->next;
            delete del;
            return head;
        }
        head=tmp;
        for(int i=0;i<num;i++)
        {

            if(i==num-n)
            {
                ListNode* del=head->next;
                head->next=del->next;
                delete del;
            }
            head=head->next;
        }
        return tmp;
    }
};
