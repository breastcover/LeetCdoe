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
    void dfs(TreeNode* node)
    {
        if(node==NULL)
            return ;
        s.insert(node->val);
        if(node->left)
            dfs(node->left);
        if(node->right)
            dfs(node->right);
    }
public:
    int findSecondMinimumValue(TreeNode* root) {
        if(!root)
            return -1;
        dfs(root);
        vector<int> vec(s.size());
        copy(s.begin(),s.end(),vec.begin());
        if(vec.size()>=2)
            return vec[1];
        return -1;
    }
};
