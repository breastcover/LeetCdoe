class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int target;
        for(int i=0;i<nums.size();i++)
        {
            target=-nums[i];
            int front=i+1;
            int back=nums.size()-1;
            while(front<back)
            {
                int sum=nums[front]+nums[back];
                if(sum>target)
                    back--;
                else if(sum<target)
                    front++;
                else
                {
                    vector<int> triplet(3,0);
                    triplet[0]=-target;
                    triplet[1]=nums[front];
                    triplet[2]=nums[back];
                    res.push_back(triplet);

                    while(front<back&&nums[front]==triplet[1])  front++;
                    while(front<back&&nums[back]==triplet[2])   back--;
                }
            }
            while(i+1<nums.size()&&nums[i]==nums[i+1])
                i++;
        }
        return res;
    }
};
