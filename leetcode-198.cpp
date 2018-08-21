class Solution {
public:
    int rob(vector<int>& nums) {

        int s=nums.size();
        if(s==0) return 0;
        if(s<=2) return *max_element(nums.begin(),nums.end());
        int dp[s];
        dp[0]=nums[0];
        dp[1]=max(dp[0],nums[1]);
        for(int i=2;i<s;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[s-1];
    }
};
