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
    set<int> s;
public:
    bool findTarget(TreeNode* root, int k) {
        return dfs(root,k);

    }
    private:
    bool dfs(TreeNode* root ,int k)
    {
        if(!root)
            return false;
        if(s.count(k-root->val))
            return true;
        s.insert(root->val);
        return dfs(root->left,k)||dfs(root->right,k);
    }
};
