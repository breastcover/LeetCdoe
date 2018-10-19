class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        int lis[26]={0};
        for(int i=0;i<licensePlate.size();i++)
        {
            if(licensePlate[i]>='a'&&licensePlate[i]<='z')
                lis[licensePlate[i]-'a']++;
            if(licensePlate[i]>='A'&&licensePlate[i]<='Z')
                lis[licensePlate[i]-'A']++;
        }
        int len=INT_MAX;
        string res;
        for(int i=0;i<words.size();i++)
        {
            int tmp[26]={0};
            for(int j=0;j<words[i].size();j++)
                tmp[words[i][j]-'a']++;
            int j=0;
            for(j;j<26;j++)
            {
                if(tmp[j]<lis[j])
                    break;
            }
            if(j==26)
            {
                if(words[i].size()<len)
                {
                    len=words[i].size();
                    res=words[i];
                }
            }
        }
        return res;
    }
};
