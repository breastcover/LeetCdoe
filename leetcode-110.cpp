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
    int maxDepth(TreeNode* root)
    {
        return root==NULL?0:max(maxDepth(root->left),maxDepth(root->right))+1;
    }

public:
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        TreeNode* left=root->left;
        TreeNode* right=root->right;
        return abs(maxDepth(left)-maxDepth(right))<=1&&isBalanced(left)&&isBalanced(right);
    }
};
