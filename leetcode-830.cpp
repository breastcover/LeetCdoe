class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        int start=0,end=0;

        vector<vector<int>> res;
        for(int i=1;i<S.size();)
        {
            while(S[i]==S[start])
            {
                end=i;
                i++;
            }

            {
                if(end-start>=2)
                {
                    vector<int> vec;
                    vec.push_back(start);
                    vec.push_back(end);
                    res.push_back(vec);
                }
                start=end=i;
                i++;
            }
        }
        return res;
    }
};
