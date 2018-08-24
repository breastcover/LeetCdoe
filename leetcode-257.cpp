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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> vec;
        if(!root) return vec;
        dfs(root,vec,to_string(root->val));
        return vec;
    }

    void dfs(TreeNode* root,vector<string>& vec,string path)
    {
        if(!root->left&&!root->right)
            vec.push_back(path);
        if(root->left)
            dfs(root->left,vec,path+"->"+to_string(root->left->val));
        if(root->right)
            dfs(root->right,vec,path+"->"+to_string(root->right->val));
    }

};
