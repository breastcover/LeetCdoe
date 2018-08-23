/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    ListNode* tmp;
public:
    bool isPalindrome(ListNode* head) {
        tmp=head;
        return check(tmp);
    }
    bool check(ListNode* p)
    {
        if(p==NULL) return true;
        bool isPal=check(p->next)&(tmp->val==p->val);
        tmp=tmp->next;
        return isPal;
    }
};
