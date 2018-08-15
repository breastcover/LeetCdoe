class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int CurrentSum=0,TotalSum=INT_MIN;
        for(int i=0;i<nums.size();++i)
        {
            CurrentSum=max(CurrentSum+nums[i],nums[i]);
            TotalSum=max(CurrentSum,TotalSum);
        }
        return TotalSum;
    }
};
