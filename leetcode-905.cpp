class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> vec;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2==0)
            {
                vec.push_back(A[i]);

            }
        }
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2)
            {
                vec.push_back(A[i]);

            }
        }
        return vec;
    }
};
