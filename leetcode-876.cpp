
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

ListNode* middleNode(ListNode* head) {
        int cnt=0;
        ListNode* node=head;
        while(node->next)
        {
            node=node->next;
            cnt++;
        }
        cout<<cnt<<endl;
        ListNode* res=head;
        int middle;
        if(cnt%2)
            middle=cnt/2+1;
        else
            middle=cnt/2;
        for(int i=0;i<middle;i++)
        {
            res=res->next;
        }
        return res;
    }
