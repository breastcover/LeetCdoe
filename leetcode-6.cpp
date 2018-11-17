class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        int step1,step2;
        int len=s.size();
        string res="";
        for(int i=0;i<numRows;i++)
        {
            step1=(numRows-i-1)*2;
            step2=i*2;
            int pos=i;
            if(pos<len)
                res+=s.at(pos);
            while(1)
            {
                pos+=step1;
                if(pos>=len)
                    break;
                if(step1)
                    res+=s.at(pos);
                pos+=step2;
                if(pos>=len)
                    break;
                if(step2)
                    res+=s.at(pos);
            }
        }
        return res;
    }
};
