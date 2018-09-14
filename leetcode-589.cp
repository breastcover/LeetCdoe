/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
    vector<int> vec;
public:
    vector<int> preorder(Node* root) {
        if(!root)
            return vec;
        stack<Node* >st;
        st.push(root);
        while(!st.empty())
        {
            Node* tmp=st.top();
            st.pop();
            for(int i=tmp->children.size()-1;i>=0;i--)
                st.push(tmp->children[i]);
            vec.push_back(tmp->val);
        }
        return vec;
    }
};
