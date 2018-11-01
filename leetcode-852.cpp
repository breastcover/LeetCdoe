class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int MAX=-1;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]>MAX)
                MAX=A[i];
            else
                return i-1;
        }
    }
};
