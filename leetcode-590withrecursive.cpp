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
    vector<int> res;
public:
    vector<int> postorder(Node* root) {
        if(!root)
            return res;

        for(auto child:root->children)
            postorder(child);

        res.push_back(root->val);

        return res;
    }
};
