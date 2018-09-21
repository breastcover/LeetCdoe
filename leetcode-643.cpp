class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int max=INT_MIN;
        if(nums.size()<=k)
        {
            for(auto num:nums)
                sum+=num;
            return sum*1.0/k;
        }
        else
        {
            for(int i=0;i<k;i++)
                sum+=nums[i];
            max=sum;
            for(int i=k;i<nums.size();i++)
            {
                sum=sum+nums[i]-nums[i-k];
                if(sum>max)
                    max=sum;
            }
        }
        return max*1.0/k;
    }
};
