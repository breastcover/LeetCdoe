class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {

        vector<vector<int>> res(A.size());
        if(A.empty())
            return res;
        for(int i=0;i<A.size();i++)
        {
            for(int j=A[i].size()-1;j>=0;j--)
            {
                if(A[i][j]==1)
                    res[i].push_back(0);
                else
                    res[i].push_back(1);
            }
        }
        return res;

    }
};
