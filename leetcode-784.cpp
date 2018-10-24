class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> strings;
        strings.push_back(S);
        for(int i=0;i<S.size();i++)
        {
            if(isalpha(S[i]))
            {
                int stop=strings.size();
                for(int j=0;j<stop;j++)
                {
                    string s=strings[j];
                    s[i]=switchcase(s[i]);
                    strings.push_back(s);
                }
            }
        }
        return strings;
    }

    char switchcase(char& c)
    {
        if(c>='a'&&c<='z')
            return toupper(c);
        else
            return tolower(c);
    }
};
