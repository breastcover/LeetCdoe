class Node
{
    public:

        int val;
    Node* next;
    Node(int x){
        this->val=x;
        next=nullptr;

    }
};

class MyLinkedList {
public:
    /** Initialize your data structure here. */
    int size=0;
    Node* head=new Node(0);
    MyLinkedList() {

    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index>=size)
            return -1;
        Node* tmp=head->next;
        for(int i=0;i<index;i++)
            tmp=tmp->next;
        return tmp->val;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node* tmp=head->next;
        head->next=new Node(val);
        head->next->next=tmp;
        size++;
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node* tmp=head;
        while(tmp->next!=nullptr)
            tmp=tmp->next;
        tmp->next=new Node(val);
        size++;
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index>size)
            return ;
        Node* tmp=head;
        for(int i=0;i<index;i++)
            tmp=tmp->next;
        Node* tmp2=new Node(val);
        tmp2->next=tmp->next;
        tmp->next=tmp2;
        size++;

    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index>=size) return;
        Node* tmp=head;
        for(int i=0;i<index;i++)
            tmp=tmp->next;
        Node* del=tmp->next;
        tmp->next=del->next;
        del->next=nullptr;
        delete del;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */
