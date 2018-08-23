class Solution {
public:
    bool isAnagram(string s, string t) {
        int m[256]={0},n[256]={0};
        int size=max(s.size(),t.size());
        for(int i=0;i<size;i++)
        {
            ++m[s[i]];
            ++n[t[i]];
        }
        for(int i=0;i<256;i++)
        {
            if(m[i]!=n[i])
                return false;
        }
        return true;
    }
};
