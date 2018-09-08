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
    int maxLength=0;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return maxLength;

    }
    int dfs(TreeNode* root)
    {
        if(!root)
            return 0;
        int leftLength=dfs(root->left);
        int rightLength=dfs(root->right);
        if(leftLength+rightLength>maxLength)
            maxLength=leftLength+rightLength;
        return max(leftLength+1,rightLength+1);
    }
};
