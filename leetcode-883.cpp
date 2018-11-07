class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int area=0;
        int x=INT_MIN,y=INT_MIN;
        for(int j=0;j<row;j++)
        {
            for(int i=0;i<col;i++)
            {
                if(grid[j][i])
                    area++;
                x=max(x,grid[j][i]);
                y=max(y,grid[i][j]);
            }
            area+=x;
            area+=y;
            x=INT_MIN,y=INT_MIN;
        }
        return area;
    }
};
