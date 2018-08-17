class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curmax=0; int resmax=0;
        for(int i=1;i<prices.size();i++)
        {
            curmax=max(0,curmax+=prices[i]-prices[i-1]);
            resmax=max(curmax,resmax);
        }
        return resmax;
    }
};
