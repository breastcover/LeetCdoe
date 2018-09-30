class Solution {
public:
    int countBinarySubstrings(string s) {
        int cnt=1;
        vector<int> vec;
        int res=0;
        for(int i=1,n=s.size();i<=n;i++)
        {
            if(s[i]==s[i-1])
                cnt++;
            else
            {
                vec.push_back(cnt);
                cnt=1;
            }
        }
        for(int i=1;i<vec.size();i++)
        {
            res+=min(vec[i],vec[i-1]);
        }
        return res;
    }
};
