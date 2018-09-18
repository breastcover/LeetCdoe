class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.empty())
            return m*n;
        int minrow=INT_MAX;
        int mincol=INT_MAX;
        for(auto points:ops)
        {


                minrow=min(minrow,points[0]);
                mincol=min(mincol,points[1]);

        }
        return minrow*mincol;
    }
};
