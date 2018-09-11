class Solution {
public:
    string reverseWords(string s) {
        if(s.empty())
            return "";
        string res;
        stringstream ss(s);
        string word;
        while(ss>>word)
        {
            reverse(word.begin(),word.end());
            res+=word+" ";
        }
        res.erase(res.size()-1);
        return res;
    }
};
