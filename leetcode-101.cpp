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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        TreeNode* p=root->left;
        TreeNode* q=root->right;
        return dps(p,q);


    }
    bool dps(TreeNode *m,TreeNode* n)
        {
            if(m==NULL||n==NULL)  return m==n;
            return (m->val==n->val&&dps(m->left,n->right)&&dps(m->right,n->left));
        }
};
