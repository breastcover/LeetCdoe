class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums[0]==target&&nums.size()==1)
            return 0;
        int l=0,r=nums.size()-1;
        int mid=(l+r)/2;
        while(l<r)
        {
            if(nums[mid]==target)
                break;
            if(nums[mid]>target)
                r=mid;
            else
                l=mid+1;
            mid=(l+r)/2;
        }
        if(nums[mid]==target)
            return mid;
        return -1;

    }
};
