class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        int n=nums.size();
        if(nums.size()<4)
            return res;
        for(int i=0;i<n-3;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
                continue;
            if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target)
                break;
            if(nums[i]+nums[n-1]+nums[n-2]+nums[n-3]<target)
                continue;
            for(int j=i+1;j<n-2;j++)
            {
                if(j>i+1&&nums[j]==nums[j-1])
                    continue;
                if(nums[i]+nums[j+1]+nums[j+2]+nums[j]>target)
                    break;
                if(nums[i]+nums[n-1]+nums[n-2]+nums[j]<target)
                    continue;
                int left=j+1,right=n-1;
                while(left<right)
                {
                    int sum=nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum>target)
                        right--;
                    else if(sum<target)
                        left++;
                    else
                    {
                        res.push_back(vector<int>{nums[i],nums[j],nums[left],nums[right]});
                        do{left++;}while(nums[left]==nums[left-1]&&left<right);
                        do{right--;}while(nums[right]==nums[right+1]&&left<right);
                    }
                }
            }
        }
        return res;
    }
};
