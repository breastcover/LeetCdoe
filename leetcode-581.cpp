class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> vec;
        for(int i=0;i<nums.size();i++)
        {
            vec.push_back(nums[i]);
        }
        sort(nums.begin(),nums.end());
        int b=0,e=0;
        for(int i=0;i<nums.size();i++)
        {
            if(vec[i]!=nums[i])
            {
                b=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(vec[i]!=nums[i])
            {
                e=i;
                break;
            }
        }
        if(e==b)
            return 0;
        return e-b+1;
    }
};
