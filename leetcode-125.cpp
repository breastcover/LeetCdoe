class Solution {
public:
    bool isPalindrome(string s) {
        int size=s.size();
        vector<char> vec;
        vector<char> vec1;
        for(int i=0;i<size;++i)
        {
            if(isalpha(s[i])||(s[i]>='0'&&s[i]<='9'))
                vec.push_back(tolower(s[i]));
        }
        vec1=vec;
        reverse(vec.begin(),vec.end());
        if(vec1==vec)
            return true;
        return false;
    }
};
