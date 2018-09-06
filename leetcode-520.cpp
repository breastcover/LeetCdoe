class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size()==1)
            return true;
        stringstream ss(word);
        string umm;
        while(ss>>umm)
        {
            if(isupper(umm[0]))
            {
                if(isupper(umm[1]))
                {
                    for(int i=2;i<umm.size();i++)
                    {
                        if(islower(umm[i]))
                            return false;
                    }
                    return true;
                }
                if(islower(umm[1]))
                {
                    for(int i=2;i<umm.size();i++)
                    {
                        if(isupper(umm[i]))
                            return false;
                    }
                    return true;
                }
            }
            else
            {
                if(islower(umm[1]))
                {
                    for(int i=2;i<umm.size();i++)
                    {
                        if(isupper(umm[i]))
                            return false;
                    }
                    return true;
                }else
                {
                    return false;
                }
            }
        }
    }
};
