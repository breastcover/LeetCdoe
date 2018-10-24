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
    int minDiffInBST(TreeNode* root) {
        TreeNode* pre=NULL;
        int ans=INT_MAX;
        helper(root,&pre,ans);
        return ans;
    }
    void helper(TreeNode* root, TreeNode** pre,int& ans)
    {
        if(!root)
            return ;
        helper(root->left,pre,ans);
        if(*pre)
            ans=min(root->val-(*pre)->val,ans);
        *pre=root;
        helper(root->right,pre,ans);
    }
};
