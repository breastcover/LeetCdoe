class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.empty())
            return -1;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int ans=0;
        if(ans==sum-nums[0])
            return 0;
        for(int i=1;i<nums.size();i++)
        {
            ans+=nums[i-1];
            int tmp=sum;
            tmp=tmp-ans-nums[i];
            if(tmp==ans)
                return i;
        }
        return -1;
    }
};
