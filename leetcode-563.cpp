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
    int helper(TreeNode* root,int& tilt)
    {
        if(root==nullptr)
            return 0;
        int l=helper(root->left,tilt);
        int r=helper(root->right,tilt);
        tilt+=abs(l-r);
        return root->val+l+r;
    }
public:
    int findTilt(TreeNode* root) {
        int tilt=0;
        helper(root,tilt);
        return tilt;
    }


};
