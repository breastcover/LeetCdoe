class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        string tmp=A;
        int i=1;

        while(tmp.find(B)==string::npos)
        {
            if(i>B.size()/A.size()+2)
                return -1;
            tmp+=A;
            i++;
        }
        return i;
    }
};
