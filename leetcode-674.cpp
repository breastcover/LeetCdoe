class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int max=1;
        int cnt=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]>nums[i])
                cnt++;
            else
                cnt=1;
            if(cnt>max)
                max=cnt;
        }
        return max;
    }
};
