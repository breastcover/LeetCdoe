class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int area=0;
        int row_max=INT_MIN;
        int col_max=INT_MIN;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                row_max=max(row_max,grid[i][j]);
                col_max=max(col_max,grid[j][i]);
                if(grid[i][j])
                    area+=grid[i][j]*4+2;
                if(i>0)
                    area-=min(grid[i][j],grid[i-1][j])*2;
                if(j>0)
                    area-=min(grid[i][j],grid[i][j-1])*2;
            }

        }
        return area;
    }
};
