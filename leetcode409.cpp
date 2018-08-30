class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> us;
        int length=0;
        int flag=0;
        for(int i=0;i<s.size();i++)
        {
            ++us[s[i]];
        }
        for(int i=0;i<s.size();i++)
        {
            while(us[s[i]]>=2)
            {
                length+=2;
                us[s[i]]-=2;
            }
            if(us[s[i]]==1)
            {
                flag=1;
            }
        }
        return length+flag;
    }
};
