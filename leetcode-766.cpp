class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size()-1;i++)
        {
            if(!compare(matrix[i],matrix[i+1]))
                return false;
        }
        return true;
    }

    bool compare(vector<int> n,vector<int> m)
    {
        for(int i=0;i<n.size()-1;i++)
        {
            if(n[i]!=m[i+1])
                return false;
        }
        return true;
    }
};
