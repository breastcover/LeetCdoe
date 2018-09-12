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
    int maxDepth(Node* root) {
        if(root==nullptr)
            return 0;
        queue<Node*> q;
        q.push(root);
        int depth=0;
        while(!q.empty())
        {
            depth+=1;
            int s=q.size();
            for(int i=0;i<s;++i)
            {
                Node* tmp=q.front();
                q.pop();
                for(auto child:tmp->children)
                    q.push(child);
            }
        }
        return depth;
    }
};
