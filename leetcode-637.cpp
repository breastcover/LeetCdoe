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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        vector<double> res;
        q.push(root);

        while(!q.empty())
        {
            queue<TreeNode*> tmp;
            long long sum=0;
            long long count=0;
            while(!q.empty())
            {
                sum+=q.front()->val;
                count++;
                if(q.front()->left!=NULL)
                tmp.push(q.front()->left);
                if(q.front()->right!=NULL)
                tmp.push(q.front()->right);
                q.pop();
            }
            q=tmp;
            res.emplace_back(sum*1.0/count);
        }
        return res;
    }
};
