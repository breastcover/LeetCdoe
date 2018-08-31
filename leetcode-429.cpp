/*
// Definition for a Node.
class Node {
public:
    int val = NULL;
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
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return vector<vector<int>>();
        vector<vector<int>> res;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int> vec;
            for(int i=0;i<size;i++)
            {
                Node* tmp=q.front();
                vec.push_back(tmp->val);
                for(auto n:tmp->children)
                    q.push(n);
                q.pop();
            }
            res.push_back(vec);
        }
        return res;
    }
};
