class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        if(!m)
        {
            return 0;
        }
        vector<int> lps=KMPprocessing(needle);
        for(int i=0,j=0;i<n;)
        {
            if(haystack[i]==needle[j])
            {
                i++;
                j++;
            }
            if(j==m)
            {
                return i-j;
            }
            if(i<n&&haystack[i]!=needle[j])
            {
                if(j)
                {
                    j=lps[j-1];
                }
                else
                    i++;
            }
        }
        return -1;
    }
    private:
    vector<int> KMPprocessing(string& needle)
    {
        int n=needle.length();
        vector<int> lps(n,0);
        int len;
        for(int i=1,len=0;i<n;)
        {
            if(needle[i]==needle[len])
            {
                lps[i++] = ++len;
            }
            else if(len)
            {
                len=lps[len-1];
            }
            else
            {
                lps[i++]=0;
            }
        }
        return lps;
    }
};
