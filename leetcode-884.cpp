class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        istringstream s(A+" "+B);
        map<string,int> m;
        string word;
        vector<string> res;
        while(s>>word)
        {
            m[word]++;
        }
        for(auto e:m)
        {
            if(e.second==1)
                res.push_back(e.first);
        }
        return res;
    }
};
