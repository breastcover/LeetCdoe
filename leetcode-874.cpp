class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        vector<vector<int>> dir{{0,1},{1,0},{0,-1},{-1,0}};
        int x=0,y=0;
        int d=0;
        int res=0;
        unordered_set<string> us;
        for(auto s:obstacles)
            us.insert(to_string(s[0])+"#"+to_string(s[1]));
        for(int i=0;i<commands.size();i++)
        {
            if(commands[i]==-1)
                d++;
            else if(commands[i]==-2)
                d--;
            else if(commands[i]>=0)
            {
                for(int j=0;j<commands[i];j++)
                {
                    string tmp=to_string(x+dir[d][0])+"#"+to_string(y+dir[d][1]);
                    if(us.find(tmp)!=us.end())
                        break;
                    x+=dir[d][0];
                    y+=dir[d][1];
                }
                res=max(res,x*x+y*y);
            }
            if(d==-1) d=3;
            if(d==4) d=0;
        }
        return res;
    }
};
