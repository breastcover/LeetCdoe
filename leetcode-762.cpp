class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        set<int> primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
        int cnt=0;
        for(int i=L;i<=R;i++)
        {
            int n=bitset<32>(i).count();
            cnt+=primes.count(n);
        }
        return cnt;
    }
};
