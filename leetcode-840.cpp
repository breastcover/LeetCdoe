class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        if(grid.size()==1||grid[0].size()==1)
            return 0;
        int res=0;
        for(int i=0;i<grid.size()-2;i++)
        {
            for(int j=0;j<grid[0].size()-2;j++)
            {
                if(grid[i+1][j+1]!=5)
                    continue;
                int vals[9]={grid[i][j],grid[i][j+1],grid[i][j+2],
                            grid[i+1][j],grid[i+1][j+1],grid[i+1][j+2],
                            grid[i+2][j],grid[i+2][j+1],grid[i+2][j+2]};
                if(magic(vals))
                    res++;
            }
        }
        return res;
    }

    bool magic(int vals[9])
    {
        int count[16]={0};
        for (int i=0;i<9;i++)
            count[vals[i]]++;
        for (int v = 1; v <= 9; ++v)
            if (count[v] != 1)
                return false;
        return (vals[0] + vals[1] + vals[2] == 15 &&
                vals[3] + vals[4] + vals[5] == 15 &&
                vals[6] + vals[7] + vals[8] == 15 &&
                vals[0] + vals[3] + vals[6] == 15 &&
                vals[1] + vals[4] + vals[7] == 15 &&
                vals[2] + vals[5] + vals[8] == 15 &&
                vals[0] + vals[4] + vals[8] == 15 &&
                vals[2] + vals[4] + vals[6] == 15);
    }
};
