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
    int res=0;
public:
    int longestUnivaluePath(TreeNode* root) {

        dfs(root);
        return res;
    }

    private:
    int dfs(TreeNode* node)
    {
        if(node==NULL)
            return 0;
        int left=dfs(node->left);
        int right=dfs(node->right);
        int sum=0,ll=0,lr=0;
        if(node->left&&node->left->val==node->val)
            ll+=left+1;
        if(node->right&&node->right->val==node->val)
            lr+=right+1;
        res=max(res,ll+lr);
        return max(ll,lr);
    }
};
