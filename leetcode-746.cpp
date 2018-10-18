class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> fees(cost.size()+1,0);
        for(int i=2;i<=cost.size();i++)
        {
            fees[i]=min(fees[i-1]+cost[i-1],fees[i-2]+cost[i-2]);
        }
        return fees.back();
    }
};
