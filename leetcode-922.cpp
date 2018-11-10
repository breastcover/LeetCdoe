class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        for(int i=0;i<A.size();i+=2)
        {
            if(A[i]%2)
            {
                int j=1;
                for(j;j<A.size();j+=2)
                {
                    if(A[j]%2==0)
                        swap(A[i],A[j]);
                }
            }
        }
        return A;
    }
};
