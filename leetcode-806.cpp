class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int width=0;
        int row=1;
        vector<int> res;
        for(int i=0;i<S.size();i++)
        {
            width+=widths[S[i]-'a'];
            if(width>100)
            {
                row++;
                width=widths[S[i]-'a'];
            }
        }
        res.push_back(row);
        res.push_back(width);
        return res;
    }
};
