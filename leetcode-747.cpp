class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int i=0;i<nums.size();i++)
            um[nums[i]]=i;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(nums[n-1]>=nums[n-2]*2)
            return um[nums[n-1]];
        return -1;
    }
};
