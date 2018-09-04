class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
            return "0";
        string s="";
        int flag=0;
        if(num<0)
        {
            num=-num;
            flag=1;
        }
        while(num)
        {
            int tmp=(num)%7;
            s=to_string(tmp)+s;
            num/=7;
        }
        if(flag)
        {
            s="-"+s;
        }
        return s;
    }
};
