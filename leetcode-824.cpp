class Solution {
public:
    string toGoatLatin(string S) {
        string vowel={"aeiouAEIOU"};
        istringstream word(S);
        string s;
        vector<string> vec;
        while(word>>s)
        {
            vec.push_back(s);
        }
        for(int i=0;i<vec.size();i++)
        {
            if(vowel.find(vec[i][0])==string::npos)
            {
                if(vec[i].size()==1)
                    ;
                else
                {
                    char tmp=vec[i][0];
                    vec[i].erase(vec[i].begin());
                    vec[i]+=tmp;
                }
            }
            vec[i]=vec[i]+"ma";
                for(int j=0;j<=i;j++)
                    vec[i]=vec[i]+"a";
        }
        string res=vec[0];
        for(int i=1;i<vec.size();i++)
            res=res+" "+vec[i];
        return res;
    }
};
