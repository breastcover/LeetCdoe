class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> position;
        vector<int> res;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]==C)
                position.push_back(i);
        }
        for(int i=0;i<S.size();i++)
        {
            int MIN=INT_MAX;
            for(int j=0;j<position.size();j++)
            {
                MIN=min(MIN,abs(i-position[j]));
            }
            res.push_back(MIN);
        }
        return res;
    }
};
