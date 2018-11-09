class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int mx=A[0],mn=A[0];
        for(int e:A)
        {
            mx=max(mx,e);
            mn=min(mn,e);
        }
        return max(0,mx-mn-2*K);
    }
};
