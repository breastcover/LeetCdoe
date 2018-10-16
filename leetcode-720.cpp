class Solution {
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(),words.end());
        string res;
        unordered_set<string> built;
        for(auto word:words)
        {
            if(word.size()==1||built.count(word.substr(0,word.size()-1)))
            {
                res=word.size()>res.size()?word:res;
                built.insert(word);
            }
        }
        return res;
    }
};
