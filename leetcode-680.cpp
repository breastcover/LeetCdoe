class Solution {
public:
    bool validPalindrome(string s) {
        if(s.size()<=2)
            return true;
        int l=0;
        int r=s.size()-1;
        while(l<=r)
        {
            if(s[l]==s[r])
                l++,r--;
            else
            {
                int ll=l+1,lr=r;
                while(ll<=lr&&s[ll]==s[lr])
                {
                    ll++,lr--;
                }
                if(ll>=lr)
                return true;

                int rl=l,rr=r-1;
                while(rl<=rr&&s[rl]==s[rr])
                {
                    rl++,rr--;
                }
                if(rl>=rr)
                return true;

                return false;
            }
        }
        return true;
    }
};
