class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int res=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                    res=max(res,dfs(grid,i,j));
            }
        }
        return res;
    }
    private:
    int dfs(vector<vector<int>>& grid,int row,int col)
    {
        int m=grid.size();
        int n=grid[0].size();
        int area=1;
        grid[row][col]=2;
        int dir[5]={-1,0,1,0,-1};
        for(int i=0;i<4;i++)
        {
            int r=row+dir[i];
            int c=col+dir[i+1];
            if(r>=0&&r<m&&c>=0&&c<n&&grid[r][c]==1)
                area+=dfs(grid,r,c);
        }
        return area;
    }
};
