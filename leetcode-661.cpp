class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int n=M.size(),m=M[0].size();
        if(n==0||m==0)
            return {{}};
        int sum;
        vector<vector<int>> dir={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                sum=M[i][j];
                int count=1;
                for(int k=0;k<dir.size();k++)
                {
                    int x=i+dir[k][0];
                    int y=j+dir[k][1];
                    if(x<0||x>n-1||y<0||y>m-1)
                        continue;
                    sum+=(M[x][y]&0xFF);
                    count++;
                }
                M[i][j]|=((sum/count)<<8);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                M[i][j]>>=8;
            }
        }
        return M;
    }
};
