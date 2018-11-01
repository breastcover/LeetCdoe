class Solution {
public:
    bool buddyStrings(string A, string B) {
        int size_A=A.size();
        int size_B=B.size();
        if(size_A!=size_B)
            return false;
        int A_numchar=unordered_set<char>(A.begin(),A.end()).size();
        if(A==B&&size_B>A_numchar)
            return true;
        vector<int> vec;
        for(int i=0;i<size_A;i++)
        {
            if(A[i]!=B[i])
                vec.push_back(i);
            if(vec.size()>2)
                return false;
        }
        return vec.size()==2&&A[vec[0]]==B[vec[1]]&&A[vec[1]]==B[vec[0]];
    }
};
