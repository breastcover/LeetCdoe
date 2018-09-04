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
    vector<int> findMode(TreeNode* root) {
        fm(root);
        vector<int> res;
        int max=0;
        for(auto iter=times.begin();iter!=times.end();iter++)
        {
            if(iter->second>max)
                max=iter->second;
        }
        for(auto iter=times.begin();iter!=times.end();iter++)
        {
            if(iter->second==max)
                res.push_back(iter->first);
        }
        return res;
    }
    void fm(TreeNode* root)
    {
         if(!root)
            return ;
        ++times[root->val];
        fm(root->left);
        fm(root->right);
    }

    private:
    unordered_map<int,int> times;
};
