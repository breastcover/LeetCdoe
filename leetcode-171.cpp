class Solution {
public:
    int titleToNumber(string s) {
        int l=s.size();
        int sum=0;
        for(int i=l-1;i>=0;i--)
        {
            sum+=(s[i]-64)*pow(26,l-1-i);

        }
        return sum;
    }
};
