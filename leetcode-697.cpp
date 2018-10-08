class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        if(nums.size()<2)
            return nums.size();
        unordered_map<int,int> position,count;
        int len=nums.size(),fre=0;
        for(int i=0;i<nums.size();i++)
        {
            if(position.count(nums[i])==0)
                position[nums[i]]=i;
            count[nums[i]]++;
            if(count[nums[i]]==fre)
            {
                len=min(i-position[nums[i]]+1,len);
            }
            if(count[nums[i]]>fre)
            {
                len=i-position[nums[i]]+1;
                fre=count[nums[i]];
            }
        }
        return len;
    }
};
