class Solution {
    int squareDigit(int n)
    {
        int sum=0;
        while(n)
        {
            int tmp=n%10;
            sum+=tmp*tmp;
            n/=10;
        }

        return sum;
    }
public:
    bool isHappy(int n) {
        int sum;
        int slow=n;
        int fast=n;
        do
        {
            slow=squareDigit(slow);
            fast=squareDigit(fast);
            fast=squareDigit(fast);
        }while(slow!=fast);
        if(slow==1) return 1;
        else return 0;
    }
};
