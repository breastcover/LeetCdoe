class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k>nums.size())
            k-=nums.size();
        if(k==0||nums.size()==0)
            return ;

        for(int i=1;i<=k;i++)
        {
            int num=nums[nums.size()-1];
            for(int j=nums.size()-1;j>=0;j--)
            {

                nums[j]=nums[j-1];

            }

            nums[0]=num;
        }
    }
};
