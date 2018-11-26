class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res;
        int small_diff=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            int l=i+1,r=nums.size()-1;
            while(l<r)
            {
                int sum=nums[i]+nums[l]+nums[r];
                int diff=sum-target;
                if(diff==0)
                {
                    return sum;
                }
                else if(diff>0)
                {
                    if(diff<small_diff)
                    {
                        small_diff=diff;
                        res=sum;
                    }
                    r--;
                }
                else
                {
                    diff=-diff;
                    if(diff<small_diff)
                    {
                        small_diff=diff;
                        res=sum;
                    }
                    l++;
                }
            }
        }
        return res;
    }
};
