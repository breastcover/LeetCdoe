class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<char,int> mp;
        map<string,int> ms;
        int n=pattern.size();
        istringstream in(str);
        int i=0;
        for(string s;in>>s;i++)
        {
            if(i==n||mp[pattern[i]]!=ms[s])
                return false;
            mp[pattern[i]]=ms[s]=i+1;
        }
        return i==n;
    }
};
