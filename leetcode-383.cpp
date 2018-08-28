class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> us;
        for(int i=0;i<magazine.size();i++)
            ++us[magazine[i]];
        for(int j=0;j<ransomNote.size();j++)
        {

            if(--us[ransomNote[j]]<0)
                return false;
        }
        return true;

    }
};
