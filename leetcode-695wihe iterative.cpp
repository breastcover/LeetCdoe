class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int dir[5]={-1,0,1,0,-1};
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    int area=0;
                    stack<pair<int,int>> s;
                    s.push({i,j});
                    grid[i][j]=2;
                    while(!s.empty())
                    {
                        int r=s.top().first;
                        int c=s.top().second;
                        area++;
                        s.pop();
                        for(int k=0;k<4;k++)
                        {
                            int nr=r+dir[k];
                            int nc=c+dir[k+1];
                            if(nr>=0&&nr<m&&nc>=0&&nc<n&&grid[nr][nc]==1)
                            {
                                s.push({nr,nc});
                                grid[nr][nc]=2;
                            }
                        }
                    }
                    ans=max(ans,area);
                }
            }
        }
        return ans;
    }

};
