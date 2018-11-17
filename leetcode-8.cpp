class Solution {
public:
    int myAtoi(string str) {
        if(str=="")
            return 0;
        long res=0;
        int sign=1;

        for(int i=0;i<str.size();)
        {
            i=str.find_first_not_of(' ');
            if(str[i]=='+'||str[i]=='-')
                sign=(str[i++]=='-')?-1:1;
            while(str[i]>='0'&&str[i]<='9')
            {
                res=10*res+(str[i++]-'0');
                if(res*sign>=INT_MAX)
                    return INT_MAX;
                if(res*sign<=INT_MIN)
                    return INT_MIN;
            }
            return sign*res;
        }

    }
};
