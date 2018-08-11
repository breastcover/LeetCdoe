class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       auto first=nums.begin(),last=nums.end();
        while(first<last)
        {
            auto mid=first+((last-first)>>1);
            if(target>*mid)
            {
                first=mid+1;
            }
            else
            {
                last=mid;
            }
        }
        return first-nums.begin();
    }
};
