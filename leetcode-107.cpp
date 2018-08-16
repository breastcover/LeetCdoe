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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> VEC;
        if(root==NULL) return VEC;
        queue<TreeNode*> q;
        q.push(root);
        vector<int> vec;

        while(!q.empty())
        {
            vec.clear();
            for(int i=0,n=q.size();i<n;i++)
            {
                TreeNode* p=q.front();
                q.pop();
                if(p->left!=NULL)
                {
                    q.push(p->left);
                    vec.push_back(p->left->val);
                }
                if(p->right!=NULL)
                {
                    q.push(p->right);
                    vec.push_back(p->right->val);
                }
            }
            if(!vec.empty())
            VEC.push_back(vec);
        }
        reverse(VEC.begin(),VEC.end());
        vector<int> vec1={root->val};
        VEC.push_back(vec1);
        return VEC;
    }
};
