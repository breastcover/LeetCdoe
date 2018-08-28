class Solution {
public:
    int findNthDigit(int n) {
        long base=9,digit=1;
        if(n<=9)
        {
            return n;
        }
        while(n-base*digit>0)
        {
            n-=base*digit;
            base*=10;
            digit++;
        }

        int index=n%digit;
        int num=1;
        if(index==0)
            index=digit;
        for(int i=1;i<digit;i++)
            num*=10;
        num+=(index==digit)?n/digit-1:n/digit;

        string s=to_string(num);
        int res=s[index-1]-'0';
        return res;
    }
};
