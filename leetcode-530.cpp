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
    int minValue=INT_MAX,val=-1;
public:
    int getMinimumDifference(TreeNode* root) {
        if(root->left!=NULL)
            getMinimumDifference(root->left);
        if(val>=0)
            minValue=min(root->val-val,minValue);
        val=root->val;
        if(root->right!=NULL)
            getMinimumDifference(root->right);
        return minValue;
    }


};
