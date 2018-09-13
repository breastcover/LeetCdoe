/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!s&&!t)
            return true;
        if(!s||!t)
            return false;

        getDepth(s,getDepth(t,-1));

        for(auto node:vec)
        {
            if(identical(node,t))
                return true;
        }
        return false;
    }
    int getDepth(TreeNode *t,int d)
    {
        if(!t)
            return -1;
        int depth=max(getDepth(t->left,d),getDepth(t->right,d))+1;
        if(depth==d)
            vec.push_back(t);
        return depth;
    }
    bool identical(TreeNode* a,TreeNode* b)
    {
        if(!a&&!b)
            return true;
        if(!a||!b||a->val!=b->val)
            return false;
        return identical(a->left,b->left)&&identical(a->right,b->right);
    }
    private:
    vector<TreeNode*> vec;
};
