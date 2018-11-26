class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> res;
        res.push_back("");
        if(digits.empty())
            return vector<string>();
        for(int i=0;i<digits.size();i++)
        {
            int num=digits[i]-'0';
            if(num<0||num>9)
                break;
            const string& s=v[num];
            if(s.empty())
                continue;
            vector<string> tmp;
            for(int j=0;j<s.size();j++)
            {
                for(int k=0;k<res.size();k++)
                {
                    tmp.push_back(res[k]+s[j]);
                }
            }
            res.swap(tmp);
        }
        return res;
    }
};
