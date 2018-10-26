class Solution {
public:
    int rotatedDigits(int N) {
        int cnt=0;
        for(int i=1;i<=N;i++)
        {
            if(isValid(i))
                cnt++;
        }
        return cnt;
    }
    bool  isValid(int n)
    {
        bool isvalid=false;
        do
        {
            int digit=n%10;
            switch(digit)
            {
                case 3:
                case 4:
                case 7:
                    return false;
                    break;
                case 2:
                case 5:
                case 6:
                case 9:
                    isvalid=true;
                    break;
            }
            n/=10;
        }while(n!=0);
        return  isvalid;
    }
};
