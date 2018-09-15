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
public:
    vector<int> postorder(Node* root) {
        vector<int> res;
        if(!root)
            return res;

        stack<Node*> st;
        st.push(root);
        while(!st.empty())
        {
            Node* tmp=st.top();
            st.pop();
            for(auto child:tmp->children)
                st.push(child);
            res.insert(res.begin(),tmp->val);
        }
        return res;
    }
};
