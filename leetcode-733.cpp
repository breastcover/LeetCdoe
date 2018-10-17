class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        set<pair<int,int>> visited;
        int target=image[sr][sc];
        int n=image.size(),m=image[0].size();
        stack<pair<int,int>> s;
        s.push(make_pair(sr,sc));
        int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
        while(!s.empty())
        {
            int x=s.top().first;
            int y=s.top().second;
            image[x][y]=newColor;
            s.pop();
            visited.insert(make_pair(x,y));
            for(int i=0;i<4;i++)
            {
                int xx=x+dir[i][0];
                int yy=y+dir[i][1];
                if(xx>=0&&xx<n&&yy>=0&&yy<m&&image[xx][yy]==target&&!visited.count({xx,yy}))
                    s.push(make_pair(xx,yy));
            }
        }
        return image;
    }
};
