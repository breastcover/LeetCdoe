class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> vec(rowIndex+1);
        for(int i=0;i<=rowIndex;i++)
        {
            int num=i+1;
            vec[i].resize(num);
            vec[i][0]=vec[i][i]=1;
            for(int j=1;j<i;j++)
            {
                vec[i][j]=vec[i-1][j-1]+vec[i-1][j];
            }
        }
        return vec[rowIndex];
    }
};
