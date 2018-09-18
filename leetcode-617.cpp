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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(!t1&&!t2)    return NULL;
        if(!t2) return t1;
        if(!t1) return t2;
        queue<TreeNode*> q;
        q.push(t1);
        q.push(t2);
        TreeNode* res=t1;
        while(!q.empty())
        {
            TreeNode* s1=q.front();
            q.pop();
            TreeNode* s2=q.front();
            q.pop();
            s1->val+=s2->val;
            if(s1->left==NULL&&s2->left!=NULL)
                s1->left=s2->left;
            else if(s1->left!=NULL&&s2->left!=NULL)
            {
                q.push(s1->left);
                q.push(s2->left);
            }
            if(s1->right==NULL&&s2->right!=NULL)
                s1->right=s2->right;
            else if(s1->right!=NULL&&s2->right!=NULL)
            {
                q.push(s1->right);
                q.push(s2->right);
            }
        }
        return res;
    }
};
