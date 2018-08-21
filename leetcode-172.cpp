class Solution {
public:
    int trailingZeroes(int n) {
        int sum=0;
        for(long long i=5;n/i>0;i*=5)
        {
            sum+=n/i;
        }
        return sum;
    }
};
