class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curmax=0,sofarmax=0;
        for(int i=1;i<prices.size();++i)
        {
            curmax+=max(prices[i]-prices[i-1],0);

        }
        return curmax;
    }
};
